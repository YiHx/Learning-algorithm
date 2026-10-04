#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    long long n,m;
    cin>>n>>m;
    vector<long long> h(n,0);
    vector<long long> hp(m,0);
    for (int i =0;i<n;i++) {
        long long curr =0;
        cin>>curr;
        // curr = min(n+m+2,curr);
        h[i] = curr;
    }

    for (int i =0;i<m;i++) {
        long long curr =0 ;
        cin>>curr;
        hp[i] = curr;
    }
    sort(h.begin(),h.end(),greater<long long>());
    sort(hp.begin(),hp.end());

    long long attack = 0;
    long long boom = 0;
    long long dead = 0;

    // vector<long long>  health(n+m+3,0);
    unordered_map<long long ,long long>health;
    for (int i= 0;i<n;i++) {
        health[h[i]]++;
    }
    for (int i =0;i<n;i++) {
        if (h[i]> boom) {
            attack++;
            long long nowHealth = h[i] - 1;
            health[h[i]]--;
            health[nowHealth]++;
            if (nowHealth<= boom) {
                dead++;
                while (dead>boom) {
                    boom++;
                    dead+=health[boom];
                }
            }
        }
    }

    bool ok =true;
    long long nowBoom = boom;
    long long maxx = boom;

    for (int i =0;i<m;i++) {
        long long curr = max(0LL,hp[i]-nowBoom);
        if (attack >= curr) {
            attack-=curr;
        }else {
            ok =false;
            break;
        }

        nowBoom ++;
        while (maxx < nowBoom) {
            maxx++;
            long long nowDead = health[maxx];
            if (nowDead) {
                nowBoom +=nowDead;
            }
        }
    }


    if (ok) {
        cout<<"YEs"<<endl;
    }else {
        cout<<"No"<<endl;
    }
}
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T =1;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
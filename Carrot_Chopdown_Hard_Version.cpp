#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<ll> a(n);
    for (int i =0;i<n;i++) {
        cin>>a[i];
    }
    vector<ll> sf(m+2);
    for (int i =0;i<n;i++) {
        sf[a[i]]++;
    }

    for (int i =m;i>=1;i--) {
        sf[i-1] += sf[i];
    }


    long long sum =0;
    for (int i =0;i<n;i++) {
        sum+=a[i];
    }

    for (int k = 1;k<=m;k++) {
        ll ans = 0;
        if (k>=30 || (1LL<<k)>=m) {
            ans = sum;
        }else {
            for (ll x =1;x<= m / (1 << k);x++) {
                ll now = 0;
                for (ll j =1 ;j<(1<< k)&&x*j<=m;j++) {
                    now+=sf[x*j];
                }
                if (x * (1<<k) <= m) {
                    now+=sf[x*(1<<k)] - sf[x * (1<< k )+1];
                }
                ans = max(ans,sum);
            }
        }
        cout<<ans<<" ";
    }
    cout<<endl;
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
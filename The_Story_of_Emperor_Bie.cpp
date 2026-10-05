#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    vector<long long> a(n);
    vector<int> idx;
    long long maxx = LLONG_MIN;
    for (int i =0;i<n;i++) {
        cin>>a[i];
        if (a[i] == maxx) {
            idx.push_back(i);
        }else if (a[i] > maxx ) {
            maxx = a[i];
            idx.clear();
            idx.push_back(i);
        }
    }
    for (int i = 0;i<idx.size();i++) {
        cout<<idx[i]+1<<" ";
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
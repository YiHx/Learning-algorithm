#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n+1);
    long long sum = 0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    vector<long long > first(k , 0);
    vector<long long> endd(k,0);
    for(int i=1;i<k;i++){
        first[i] =first[i -1] +a[i];
    }
     for(int i = 1; i < k; i++) {
        endd[i] = endd[i-1] + a[n - i + 1];
    }
    long long minn = LLONG_MAX;
    for(int i=0;i<k;i++){
        long long now = first[i] + endd[k -1 -i];
        minn =min(minn,now);
    }
    cout<<sum - minn<<endl;
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
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int k,m,n;
    cin >> k >> m >> n;
    
    vector<int> a(n+1,0);
    for(int i =1 ;i<=n;i++){
        cin>>a[i];
         a[i] = a[i - 1] + a[i];
    }

    vector<int> b(n+1,0);
    for(int i =1;i<=n;i++){
        cin>>b[i];
    }

    // vector<int> c(n+1,0);
    
    // for(int i =1;i<=n;i++){
    //     int left = b[i] * (k + i) - a[i];
    //     int right = (b[i]+1) * (k +i) - a[i];
    //     c[left]++;
    //     c[right]--; 
    // }
    
   int left=0;
    int right=k*m;

    for(int i=1;i<=n;i++){
        int l=b[i]*(k+i)-a[i];
        int r=(b[i]+1)*(k+i)-a[i]-1;

        left=max(left,l);
        right=min(right,r);
    }

    cout<<max(0LL,right-left+1)<< endl;
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}
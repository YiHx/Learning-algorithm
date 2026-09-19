#include <bits/stdc++.h>
using namespace std;
#define int long long 
int ans;
int k;

bool cmp(int curr1, int curr2){
    int cnt1 = (curr1 + k - 1) / k;
    int cnt2 = (curr2 + k - 1) / k;
    if (cnt1 != cnt2) return cnt1 < cnt2;
    return curr1 < curr2;
}

void solve(){
    int n,m;
    cin>>n>>m>>k;
    int x,y;
    cin>>x>>y;
    vector<int> a(n);
    vector<int> b(m);
    for(int i =0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end(),cmp);

    vector<int> qz(n + 1, 0);
    for(int i = 0; i < n; i++) {
        qz[i + 1] = qz[i] + a[i];
    }

    int total = x + y * k;

    int cur = total;
    for(int i = 0; i < n; i++){
        if(cur - a[i] < 0){
            break;
        }
        cur -= a[i];
        ans++;
    }

    int sum_b = 0;
    for(int i=0;i<m;i++){
        int cnt = (b[i]+k - 1)/k;
        if(cnt>y){
            break;
        }
        y-=cnt;
        sum_b += b[i];
        int rem = total - sum_b;
        if(rem < 0) break;

        auto it = upper_bound(qz.begin(), qz.end(), rem);
        int can_a = (it - qz.begin()) - 1;
        ans = max(ans, (i + 1) + can_a);
    }

    cout<<ans<<endl;
}
signed main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;
    cin >> n;

    vector<int> odd, even;
    int ans = 0;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

        ans += x;

        if(i % 2 == 0){
            odd.push_back(x);
        }else{
            even.push_back(x);
        }
    }

    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());

    int k = min(odd.size(), even.size());

    for(int i = 0; i < k; i++){
        if(odd[i] + even[i] < 0){
            ans -= 2 * (odd[i] + even[i]);
        }else{
            break;
        }
    }

    cout << ans << endl;
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T = 1;
    cin >> T;

    while(T--){
        solve();
    }

    return 0;
}

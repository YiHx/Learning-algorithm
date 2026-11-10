    #include <bits/stdc++.h>
    using namespace std;
    #define endl '\n'
    #define int long long

    void solve(){
        int n;
        cin>>n;
        vector<int> a(n);
        for (int i  =0;i<n;i++) {
            cin>>a[i];
        }
        vector<int> b(n);
        for (int i  =0;i<n;i++) {
            cin>>b[i];
        }
        sort(a.rbegin(),a.rend());
        sort(b.begin(),b.end());

        int q;
        cin>>q;
        while (q--) {
            int curr;
            cin>>curr;

        }



    }
    signed main () {
        ios::sync_with_stdio(0);
        cin.tie(0);
        int T =1;
        cin>>T;
        while(T--){
            solve();
        }
        return 0;
    }
    #include <bits/stdc++.h>
    using namespace std;
    #define endl '\n'

    void solve(){
        int x;
            cin >> x;
    
            int y = 1;
    
            while(x > 0){
                y *= 10;
                x /= 10;
            }
    
            cout << y + 1 <<endl;
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
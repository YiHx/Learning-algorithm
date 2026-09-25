#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    cin>>n;
     map<int, int, greater<int>> mp;
    
    for (int i = 0; i < n; i++) {
        int curr;
        cin >> curr;
        mp[curr]++;
    }

    while(!mp.empty()) {
        for(auto it = mp.begin(); it != mp.end(); ) {
            cout << it->first << " ";
            it->second--; 
            if(it->second == 0) {
                it = mp.erase(it);
            } else {
                it++;
            }
        }
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
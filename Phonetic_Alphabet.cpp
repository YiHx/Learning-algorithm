#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
   int n;
   cin >> n;
   string s;
   cin >> s;
   for(int i = 0;i<s.size();i++){
    if(s[i] == 'A')cout << "Alpha" <<" ";
    if(s[i] == 'B')cout <<"Bravo" <<" ";
    if(s[i] == 'C')cout << "Charlie" << " ";
   }

}
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T =1;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
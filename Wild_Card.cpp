#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string str1,str2;
    cin>>str1>>str2;
    
    for(int i=0;i<n;i++){
        if(str2[i]=='*')continue;
        if(str1[i]!=str2[i]){
            cout<<"No"<<endl;
            return ;
        }
    }
    cout<<"Yes"<<endl;
}
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
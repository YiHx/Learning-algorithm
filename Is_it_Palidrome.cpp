#include <bits/stdc++.h> 
using namespace std; 

#define endl '\n' 

void solve(){ 
    int n; 
    cin>>n; 
    string a; 
    cin>>a; 
    bool ok = true; 
    bool check = false; 
    for(int i = 0; i < n / 2; i++){ 
        if(a[i] != '?' && a[n - i - 1] != '?'){ 
            if(a[i] != a[n - i - 1]){ 
                ok = false; 
            } 
        }else{ 
            check = true; 
        } 
    } 
    if(!ok){ 
        cout<<"impossible"<<endl; 
    }else if(check){ 
        cout<<"possible"<<endl; 
    }else { 
        cout<<"certainly"<<endl; 
    } 
} 

int main () { 
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    int T = 1; 
    cin>>T; 
    while(T--){ 
        solve(); 
    } 
    return 0; 
}
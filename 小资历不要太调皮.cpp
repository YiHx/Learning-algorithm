#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    string s,t;
    cin>> s>> t;

    string a = "WASD";
    sort(a.begin(),a.end());
    do {
        string curr = "";
        curr.reserve(4*n);
        for (int i =0 ;i<n;i++)curr+=a;
        if (curr.find(t) == string::npos && curr.find(s) == string::npos) {
            cout << curr <<endl;
            return;
        }

    }while (next_permutation(a.begin(),a.end()));
    cout <<-1<<endl;

}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
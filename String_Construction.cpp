#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
    int n,k;
    cin>>n>>k;
    int first = k/2;
    int second = (k+2 -1)/2;
    first++;
    second++;
    if (first + second > n) {
        cout<<-1<<endl;
    }else {
        int curr = 0;
        string a(first,'0');
        a.append(second,'1');
        int last = n - (first+second);
        for (int i =0;i<last/2;i++) {
            a = a+ "01";
        }
        if (last%2!=0) {
            a = a + "0";
        }
        cout<<a<<endl;
    }
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
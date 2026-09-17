
#include <bits/stdc++.h>
using namespace std;

const int N =2e5+10;
int a[N];
void solve() {
    int t;
    cin>>t;
    while (t--) {

        int cnt=0;
        int n;
        cin>>n;
        for (int i=0;i<n;i++) {
            cin>>a[i];
            if (a[i]==0)cnt++;
        }
        if (cnt == 0) {
            string ans (n,'A');
            cout<<"yes"<<endl;
            cout<<ans<<endl;

        }
        if (cnt ==1) {
            cout<<"No"<<endl;

        }
        if (cnt>=2) {
            bool check = false;
            string ans ="";
            for (int i=0; i<n ;i++) {
                if (a[i]==0&&check==false) {
                    ans+="A";
                    check=true;
                }else if (a[i]==0) {
                    ans+="B";
                }else {
                    ans+="C";
                }
            }
            cout<<"YEs"<<endl;
            cout<<ans<<endl;
        }

    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
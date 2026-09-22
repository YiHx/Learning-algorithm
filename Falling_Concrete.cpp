#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    for (int i=0;i<n;i++) {
        a[i]=a[i]-i;
    }
    ranges::sort(a);
    int maxx =1;
    int curr =1;

        for (int i=0;i<n-1;i++) {
            if (a[i+1]-a[i]==1)curr++;
            else if (a[i+1]-a[i]>1)curr=1;
            maxx =max(curr,maxx);
        }
        cout<<maxx<<endl;

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
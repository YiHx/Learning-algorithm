#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n,m,k;
    cin>>n>>m>>k;
    vector<double> time(n);
    for (int i =0;i<n;i++) {
        cin>>time[i];
    }
    vector<double> cha(n);
    for (int i =0;i<n;i++) {
        cin>>cha[i];
    }
    vector<pair<double,double>> ø(k);
    for (int i =0;i<k;i++) {
        cin>>ø[i].first;
    }
    for (int i =0 ;i<k;i++) {
        cin>>ø[i].second;
    }

    double all  =0;
    for (int i =0;i<n;i++) {
        all +=(time[i]);
    }
    double chaa = 0;
    for (int i =0;i<n;i++) {
        chaa +=(pow(cha[i],2));
    }

    double z = (m - all)/(sqrt(chaa));

    int idx = 0;

    for (int i =0;i<k;i++) {
        if (ø[i].first>=z) {
            idx = i;
            break;
        }
    }
    int before =0 ;
    if (idx!= 0) {
        before = idx-1;
    }
    if (abs(ø[before].first - z)<= abs(ø[idx].first - z)) {
        printf("%.3f",ø[before].second);
    }else {
        printf("%.3f",ø[idx].second);
    }


}

signed main() {

    int T = 1;
    // cin>>T;
    while (T--) {
        solve();
    }
    return 0;
}

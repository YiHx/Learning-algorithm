#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int a[10],b[10];
//vector<int> f = {1,2,3,4,5,6,7,8};

int cnt = 0;
bool flag[10];
double f(int i,int c) {
    if (c == 0) {
        return 1;
    }
    double maxx = -1;
    for (int j = 2; j <= 8; j++) {
        if (flag[j] == false) {
            flag[j] = true;
            maxx = max(maxx, (double(a[i])/double(a[i]+b[j]))*f(i,c-1)*f(j,c-1));
            flag[j] = false;
        }
    }
    for (int j = 2; j <= 8; j++) {
        if (flag[j] == false) {
            flag[j] = true;
            maxx = max(maxx, (double(b[i])/double(b[i]+a[j]))*f(i,c-1)*f(j,c-1));
            flag[j] = false;
        }
    }
    return maxx;
}

void solve() {
    //double maxx = -1;
    /*
    for (int i = 0; i < 2; i++) {
        int x = a[1][i];
        for (int j = 2; j <= 8; j++) {
            int y = a[j][!i];
            double ans1 = double(x)/(x+y);
            for (int l = 2; l <= 8; l++) {
                if (l != j) {
                    for (int m = 0; m < 2; m++) {
                        y = a[l][m];
                        double ans2 = double(x)/(x+y);
                        for (int r = 2; r <= 8; r++) {
                            if (r != l && r != j) {
                                for (int n = 0; n < 2; n++) {
                                    y = a[r][n];
                                    double ans3 = double(x)/(x+y);
                                    maxx = max(maxx, ans1*ans2*ans3);
                                }
                            }
                        }
                    }
                }
            }
        }
    } */
    /*
    for (int i1 = 1; i1 <= 8; i1++) {
        for (int i2 = 1; i2 <= 8; i2++) {
            if (i2 != i1) {
                if (i2 == )
                for (int i3 = 1; i3 <= 8; i3++) {
                    if (i3 != i2 && i3 != i1) {
                        for (int i4 = 1; i4 <= 8; i4++) {
                            if (i4 != i3 && i4 != i2 && i4 != i1) {
                                for (int i5 = 1; i5 <= 8; i5++) {
                                    if (i5 != i4 && i5 != i3 && i5 != i2 && i5 != i1) {
                                        for (int i6 = 1; i6 <= 8; i6++) {
                                            if (i6 != i5 && i6 != i4 && i6 != i3 && i6 != i2 && i6 != i1) {
                                                for (int i7 = 1; i7 <= 8; i7++) {
                                                    if (i7 != i6 && i7 != i5 && i7 != i4 && i7 != i3 && i7 != i2 && i7 != i1) {
                                                        for (int i8 = 1; i8 <= 8; i8++) {
                                                            if (i8 != i7 && i8 != i6 && i8 != i5 && i8 != i4 && i8 != i3 && i8 != i2 && i8 != i1) {

                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    */
    flag[1] = true;
    cout << f(1,4) << endl;
}

signed main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    /*
    int T =1;
    // cin>>T;
    while(T--){
        solve();
    }*/
    for (int i = 1; i <= 8; i++) {
        cin>>a[i]>>b[i];
    }
    solve();
    return 0;
}
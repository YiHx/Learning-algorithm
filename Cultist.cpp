#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    long long a, b;
    cin>>a>>b;

    long long c = a - 1;
    long long d = 8 * c + 1;

    long long g = round(sqrt(d));
    while (g * g > d) g--;
    while ((g + 1) * (g + 1) <= d) g++;
    long long h = (1 + g) / 2;
    if (h >= b) {
        cout << h << endl;
    } else {
        long long i = c / b;
        long long j = c % b;

        long long k = (b + 1) / 2;
        long long l = (b + 1) % 2;

        long long m = i + k;

        if (2 * j + b * l >= 2 * b) {
            m++;
        }
        cout << m << endl;
    }
}

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int main() {
    int n = rng()%10+1;
    int q = rng()%10+1;
    cout<<n<<" "<<q<<endl;
    for (int i=0;i<n;i++) {
        cout<<rng()%10+1<<" ";
    }
    for (int i=0;i<q;i++) {
        cout<<rng()%10+1<<" "<<rng()%10+1<<endl;
    }

    return 0;
}
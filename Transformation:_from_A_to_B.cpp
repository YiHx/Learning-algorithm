#include <bits/stdc++.h>

using namespace std;

vector<long long> path;

void dfs(long long n, long long m) {
    if (n > m) {
        return;
    }
    if (n == m) {
        cout << "YES"<<endl;
        cout << path.size() <<endl;
        for (int i = 0; i < path.size(); i++) {
            cout << path[i] << " ";
        }
        cout << endl;
        exit(0);
    }

    path.push_back(2 * n);
    dfs(2 * n, m);
    path.pop_back();

    path.push_back(10 * n + 1);
    dfs(10 * n + 1, m);
    path.pop_back();
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n, m;
    cin >> n >> m;
    path.push_back(n);
    dfs(n, m);
    cout << "NO"<<endl;


    return 0;
}
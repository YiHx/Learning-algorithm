
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

string s;
bool vis[9][9];
int ans = 0;

int dr[4] = {-1, 1, 0, 0};
int dc[4] = {0, 0, -1, 1};
char dir[4] = {'U', 'D', 'L', 'R'};

void dfs(int r, int c, int step) {
    if (r == 7 && c == 1) {
        if (step == 48) ans++;
        return;
    }

    if (step == 48) return;

    bool up = vis[r - 1][c];
    bool down = vis[r + 1][c];
    bool left = vis[r][c - 1];
    bool right = vis[r][c + 1];

    if (up && down && !left && !right) return;
    if (left && right && !up && !down) return;

    if (!up && !left && vis[r - 1][c - 1]) return;
    if (!up && !right && vis[r - 1][c + 1]) return;
    if (!down && !left && vis[r + 1][c - 1]) return;
    if (!down && !right && vis[r + 1][c + 1]) return;

    for (int i = 0; i < 4; i++) {
        if (s[step] != '?' && s[step] != dir[i])
            continue;

        int nr = r + dr[i];
        int nc = c + dc[i];

        if (vis[nr][nc]) continue;

        vis[nr][nc] = true;
        dfs(nr, nc, step + 1);
        vis[nr][nc] = false;
    }
}

void solve() {
    cin >> s;
    for (int i = 0; i < 9; i++) {
        vis[0][i] = true;
        vis[8][i] = true;
        vis[i][0] = true;
        vis[i][8] = true;
    }

    vis[1][1] = true;
    dfs(1, 1, 0);

    cout << ans << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}

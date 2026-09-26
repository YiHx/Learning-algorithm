#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

const int INF = 0x3f3f3f3f;
const int N = 105;

struct Node {
    int sheep;
    int wolf;
    int now;
};

int f[N][N][3];

void solve(){
    int x,y,p,q;
    cin>>x>>y>>p>>q;

    memset(f, -1, sizeof(f));

    queue<Node> qq;
    f[x][y][0] = 0;
    qq.push(Node{x, y, 0});

    while(!qq.empty()) {
        auto [sheep, wolf, now] = qq.front();
        qq.pop();

        if (sheep == 0 && now == 1) {
            cout << f[sheep][wolf][now] << endl;
            return;
        }

        for (int i = 0; i <= p; i++) {
            for (int j = 0; j <= p - i; j++) {
                if (now == 0) {
                    if (i <= sheep && j <= wolf) {
                        int ns = sheep - i;
                        int nw = wolf - j;

                        if (ns == 0 || nw <= ns + q) {
                            if (f[ns][nw][1] == -1) {
                                f[ns][nw][1] = f[sheep][wolf][now] + 1;
                                qq.push(Node{ns, nw, 1});
                            }
                        }
                    }
                } else {
                    int dest_sheep = x - sheep;
                    int dest_wolf = y - wolf;

                    if (i <= dest_sheep && j <= dest_wolf) {
                        int ns = sheep + i;
                        int nw = wolf + j;

                        int dest_ns = x - ns;
                        int dest_nw = y - nw;

                        if (dest_ns == 0 || dest_nw <= dest_ns + q) {
                            if (f[ns][nw][0] == -1) {
                                f[ns][nw][0] = f[sheep][wolf][now] + 1;
                                qq.push(Node{ns, nw, 0});
                            }
                        }
                    }
                }
            }
        }
    }

    cout << -1 << endl;
}

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
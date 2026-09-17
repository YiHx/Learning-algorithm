#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>

using namespace std;

// 用于双哈希记忆化询问对
struct PairHash {
    size_t operator()(const pair<int, int>& p) const {
        return (size_t)p.first * 1000000007ULL + p.second;
    }
};

int main() {
    // 快速 I/O
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    if (!(cin >> n >> q)) return 0;

    vector<int> a(n);
    vector<int> vals;
    vals.reserve(n);

    // 1. 离散化原序列（值域高达 1e9，离散化到 0 ~ m-1）
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        vals.push_back(a[i]);
    }
    sort(vals.begin(), vals.end());
    vals.erase(unique(vals.begin(), vals.end()), vals.end());

    int m = vals.size();
    vector<vector<int>> pos(m);
    for (int i = 0; i < n; ++i) {
        int id = lower_bound(vals.begin(), vals.end(), a[i]) - vals.begin();
        pos[id].push_back(i);
        a[i] = id;
    }

    auto get_id = [&](long long x) -> int {
        auto it = lower_bound(vals.begin(), vals.end(), (int)x);
        if (it != vals.end() && *it == x) {
            return it - vals.begin();
        }
        return -1;
    };

    // 2. 根号分治分类
    int B = max(1, (int)sqrt(n));
    vector<int> heavy_id(m, -1);
    vector<int> heavies;
    for (int i = 0; i < m; ++i) {
        if ((int)pos[i].size() >= B) {
            heavy_id[i] = heavies.size();
            heavies.push_back(i);
        }
    }

    // 3. 预处理重元素作为左端点 x 时的贡献
    // heavy_ans[k][y] 表示：第 k 个重元素作为 x 时，后面能匹配到多少个 y
    int heavy_cnt = heavies.size();
    vector<vector<long long>> heavy_ans(heavy_cnt, vector<long long>(m, 0));

    for (int k = 0; k < heavy_cnt; ++k) {
        int target_x = heavies[k];
        long long cur_x = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] == target_x) {
                cur_x++;
            } else {
                heavy_ans[k][a[i]] += cur_x;
            }
        }
    }

    // 4. 记忆化缓存小列表的查询
    unordered_map<pair<int, int>, long long, PairHash> memo;

    // 5. 回答询问
    while (q--) {
        long long raw_x, raw_y;
        cin >> raw_x >> raw_y;

        int x = get_id(raw_x);
        int y = get_id(raw_y);

        // 如果序列中根本不存在 x 或 y，答案为 0
        if (x == -1 || y == -1) {
            cout << 0 << "\n";
            continue;
        }

        // 情况 1: x == y
        if (x == y) {
            long long k = pos[x].size();
            cout << k * (k - 1) / 2 << "\n";
            continue;
        }

        // 情况 2: x 是重元素，直接 O(1) 查预处理表
        if (heavy_id[x] != -1) {
            cout << heavy_ans[heavy_id[x]][y] << "\n";
            continue;
        }

        // 情况 3: 查记忆化
        if (memo.count({x, y})) {
            cout << memo[{x, y}] << "\n";
            continue;
        }

        // 情况 4: 双指针计算轻元素对
        // 因为 x 不是重元素，所以 |pos[x]| < B，双指针遍历至多遍历完两个列表
        long long ans = 0;
        const auto& px = pos[x];
        const auto& py = pos[y];

        int ptr_x = 0;
        int sz_x = px.size();
        for (int p_y : py) {
            while (ptr_x < sz_x && px[ptr_x] < p_y) {
                ptr_x++;
            }
            ans += ptr_x;
        }

        memo[{x, y}] = ans;
        cout << ans << "\n";
    }

    return 0;
}
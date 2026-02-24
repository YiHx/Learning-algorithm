### 题目描述
给定一个长度为 $N$ 的数列，$A_1, A_2, … A_N$，如果其中一段连续的子序列 $A_i, A_{i+1}, … A_j$ 之和是 $K$ 的倍数，我们就称这个区间 $[i, j]$ 是 $K$ 倍区间。

你能求出数列中总共有多少个 $K$ 倍区间吗？

#### 输入格式

第一行包含两个整数 $N$ 和 $K$。

以下 $N$ 行每行包含一个整数 $A_i$。

#### 输出格式

输出一个整数，代表 $K$ 倍区间的数目。

#### 数据范围

$1 \le N, K \le 100000$,  
$1 \le A_i \le 100000$

#### 输入样例：

```
5 2
1
2
3
4
5
```

#### 输出样例：

```
6
```

---
### 算法
前缀和 

#### C++ 代码
```
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
long long  a[N],cnt[N];
int main () {
    long long  n,k;
    cin>> n>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        a[i] += a[i - 1];
    }
    long long res =0;
    cnt[0]=1;
    for(int i =1 ;i<=n;i++){
        res+=cnt[a[i]%k];
        cnt[a[i]%k]++;
    }
    cout<< res;
    return 0;
}
```

### 反思
还是那个问题要注意int的最大值是21亿多，所有在数据比较大的时候一定要记得使用long long
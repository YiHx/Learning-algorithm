#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    string a;
    cin>>a;
    a = " "+a;
    bool ok =true;
    int wish =-1;
    bool okk = true;
    bool okk1 = true;

    // 检查奇数位置
    for (int i=1;i<=n;i+=2){
        if (a[i]!='?') {
            okk = false;
        }
        if (wish==-1&&a[i]!='?') {
            wish = (a[i]-'0')^1;
            continue;
        }
        if (a[i]!='?'&&wish!=a[i]- '0') {
            ok=false;
            break;
        }

        if (wish != -1) wish ^= 1;
    }

    wish =-1;
    // 检查偶数位置
    for (int i=2;i<=n;i+=2) {
        if (a[i]!='?') {
            okk1 = false;
        }

        if (wish==-1&&a[i]!='?') {
            wish = (a[i]-'0')^1;
            continue;
        }
        if (a[i]!='?'&&wish!=a[i]- '0') {
            ok=false;
            break;
        }

        if (wish != -1) wish ^= 1;
    }

    if (!ok) {
        cout<<0<<endl;
    }else if (ok&&okk&&okk1) {
        cout<<4<<endl;
    }else if (ok&&(okk1||okk)) {
        cout<<2<<endl;
    }else if (ok&&!okk1&&!okk) {
        cout<<1<<endl;
    }
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
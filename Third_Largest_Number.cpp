#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    
    }
    priority_queue<int> pq;
    pq.push(a[0]);
    pq.push(a[1]);
    pq.push(a[2]);
    int first = pq.top();
    pq.pop();
    int second =pq.top();
    pq.pop();
    cout<<pq.top()<<endl;
    pq.push(first);
    pq.push(second);
    for(int i=3;i<n;i++){
        pq.push(a[i]);
        int first = pq.top();
        pq.pop();
       int second =pq.top();
       pq.pop();
    cout<<pq.top()<<endl;
    pq.push(first);
    pq.push(second);
    }

}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();

    return 0;
}
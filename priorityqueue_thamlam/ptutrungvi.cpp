#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    priority_queue<int> L;
    priority_queue<int, vector<int>, greater<int>> R;
    int n, x; cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> x;
        i % 2? L.push(x) : R.push(x);
        if(i > 1 && L.top() > R.top()){
            int u = L.top(); L.pop();
            int v = R.top(); R.pop();
            L.push(v);
            R.push(u);
        }
        cout << L.top() << " ";
    }
    return 0;
}
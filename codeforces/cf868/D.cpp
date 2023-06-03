#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <unordered_map>
using namespace std;
#define ll long long
#define mod 1000000007

unordered_map<int, vector<int>> edges;
vector<bool> visited;
int dfs(int node) {
    if (visited[node]) return;
    int size = 1;
    for (auto nxt : edges[node]) {
        size += dfs(nxt);
    }
    return size;
}
void solve()
{
    int n, l, r; cin >> n >> l >> r;
    int x, y;
    visited.resize(n);
    for (int i =0; i < n; i++) {
        cin >> x >> y;
        edges[x].push_back(y);
        edges[y].push_back(x);
    }
    vector<int> comps;
    for(int i = 0; i < n; i++) {
        if (!visited[i]) {
            comps.push_back(dfs(i));
        }
    } 
    bool first = false;
    for (int i = 0; i < comps.size(); i++) {
        if 
    }
    return;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    ll test;
    cin>>test;
    while(test--)
    {
        solve();
        cout << endl;
    }
    return 0;
}

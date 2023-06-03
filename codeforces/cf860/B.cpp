#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int m; cin >> m;
    vector<vector<int>> v(m);
    vector<int> days (50001);
    int n, a;
    for(int i = 0; i < m; i++) {
        cin >> n;
        for(int j = 0; j < n; j++) {
            cin >> a;
            v[i].push_back(a);
        }
    }
    vector<int> ans (m);
    for(int i = m-1; i >= 0; i--) {
        bool done = true;
        for(int j = 0; j < v[i].size(); j++) {
            if (!days[v[i][j]]) { 
                ans[i] = v[i][j];
                done = false;
                days[v[i][j]] = i;
            }
        }
        if (done) {
                cout << -1;
                return;
            }
    }
    for(auto num : ans) {
        cout << num << " ";
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

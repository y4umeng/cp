#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <queue>
#include <unordered_set>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n, m, num;
    cin >> n >> m;

    vector<int> ans (n, -1);
    unordered_set<int> seen;
    n--;
    for (int i = 1; i <= m; i++) {
        cin >> num;
        if (!seen.count(num) and n >= 0) {
            ans[n] = i;
            n--;
        }
        seen.insert(num);
    }
    for (int i : ans) {
        cout << i << " ";
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

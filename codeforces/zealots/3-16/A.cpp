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
    int n, m;
    cin >> n >> m;
    ll ans = 0;
    for(int i = 1; i<=m; i++) {
        ans += i;
    }
    for(int i = 2; i<=n; i++) {
        ans += m*i;
    }
    cout << ans;
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

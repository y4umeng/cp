#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
#define ll long long
#define mod 1000000007


int prod (ll n) {
    while (n>9) {
        ll t = 1;
        while(n) {
            if (n%10) t*=n%10;
            n/=10;
        }
        n=t;
    }
    return n;
}
vector<vector<int>> dp (10, vector<int> (1e6));
void init () {
    dp[0][0] = 1;
    for(int i = 1; i < 1e6 + 5; i++) {
        for(int j = 0; j < 10; j++) {
            dp[j][i] = dp[j][i-1];
        }
        dp[prod(i)][i]++;
    }
}
void solve()
{
    ll l, r, k; cin >> l >> r >> k;
    cout << dp[k][r]-dp[k][l-1] << '\n';
    return;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    init();
    ll test;
    cin>>test;
    while(test--)
    {
        solve();
    }
    cout << endl;
    return 0;
}

#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
#define ll long long
#define mod 1000000007

vector<ll> dp (1e5 + 5, 0);
vector<ll> sums (1e5 + 5, 0);

void init (int k) {
    dp[0] = 1;
    sums[0] = 0;
    dp[1] = ((k==1) ? (2) : (1));
    sums[1] = dp[1];

    for(int i = 2; i < 1e5 + 5; i++) {
        dp[i] = dp[i-1];
        if (i-k >= 0) dp[i] = (dp[i] + dp[i-k]) % mod;
        sums[i] = (sums[i-1] + dp[i]) % mod;
    }
} 
void solve()
{
    ll a, b; cin >> a >> b;
    cout << ((sums[b] - sums[a-1])%mod + mod) % mod << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    ll test; cin>>test;
    int k; cin >> k;
    init(k);
    while(test--)
    {
        solve();
    }
    cout << endl;
    return 0;
}

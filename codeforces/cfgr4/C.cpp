#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
#define ll long long
#define mod 998244353
void solve()
{
    int w, h;
    cin >> w >> h;
    ll ans = 1;
    for(int i = 0; i < w + h; i++) {
        ans = (ans * 2) % mod;
    }
    cout << ans % mod;
    return;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif


    solve();
    cout << endl;

    return 0;
}

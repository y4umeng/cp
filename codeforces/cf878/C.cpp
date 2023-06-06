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
    ll n, k, q; cin >> n >> k >> q;
    ll num;
    ll ans = 0;
    ll curr = 0;
    for(ll i = 0; i < n; i++) {
        cin >> num;
        if(num <= q) {
            curr++;
            if (curr >= k) {
                ans += curr - k + 1;
            }
        }
        else {
            curr = 0;
        }
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

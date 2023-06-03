#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    ll ans = 0;
    cin >> n;
    int mult = 0;
    while (n) {
        ans += (n%10) * pow(10, mult);
        n /= 10;
        if (!n) {
            ans -= pow(10, mult);
        }
        mult++;
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

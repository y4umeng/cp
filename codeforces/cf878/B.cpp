#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n, k; cin >> n >> k;
    if (k > floor(log2(double(n)))) {
        cout << n + 1;
    }
    else {
        cout << long(exp2(k));
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

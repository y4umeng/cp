#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
#define ll long long
#define mod 1000000007

ll gcd (ll a, ll b) {
    return b ? gcd (b, a % b) : a;
}

void solve()
{
    int len;
    cin >> len;
    ll n;
    ll gcd1, gcd2;
    cin >> gcd1;
    cin >> gcd2;
    vector<ll> nums;
    nums.push_back(gcd1); nums.push_back(gcd2);
    for (int i = 2; i < len; i++) {
        cin >> n;
        nums.push_back(n);
        if (i % 2) {
            gcd2 = gcd(max(gcd2, n), min(gcd2, n));
        }
        else gcd1 = gcd(max(gcd1, n), min(gcd1, n));
    }
   
    bool first = true;
    bool sec = true;
    for (int i = 0; i < len; i++) {
        if (i % 2) {
            if (nums[i] % gcd1 == 0) first = false;
        }
        else {
            if (nums[i] % gcd2 == 0) sec = false;
        }
    }
    if (first) cout << gcd1;
    else if (sec) cout << gcd2;
    else cout << 0;
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

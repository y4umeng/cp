#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <iomanip>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    if (n <= 6) {
        cout << 15;
        return;
    }
    if (n % 2 == 0) {
        cout << std::setprecision(100) << n * 2.5;
        return;
    }   
    // cout << std::fixed;
    // ccout << ((n+1) * 2.5) << endl;
    cout << std::setprecision(100)  << (n+1) * 2.5;
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

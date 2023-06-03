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
    int n, k; cin >> n >> k;
    int x = 0;
    int rhs = (2*k) + n - pow(n, 2);
    for(;x < n; x++) {
        int lhs = (2 * pow(x, 2)) - (2*n*x);
        if (lhs == rhs) {
            cout << "YES" << '\n';
            for(int i = 0; i < x; i++) {
                cout << 1 << " ";
            }
            for (int i = 0; i < n-x; i++) {
                cout << -1 << " ";
            }
            return;
        }
    }
    cout << "NO";
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

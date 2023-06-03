#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <cmath>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    if(!a and !c) {
        cout << 0; return;
    }
    else if (!a or !c) {
        cout << 1; return;
    }
    double x = (c*b)/(a*d);
    double y = (a*d)/(c*b);
    if (x == 1) cout << 0;
    else if (x == ceil(x) or y == ceil(y)) cout << 1;
    else cout << 2;
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

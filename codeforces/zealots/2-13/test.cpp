#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
#include <numeric>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll a, b, c;
    cin >>a;
    cin>>b;
    cin>>c;

    if (c % gcd(a, b) == 0) {
        cout << "yes"; 
        return;    
    }
    cout << "no";
    return;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    ll test = 1;
    while(test--)
    {
        solve();
        cout << endl;
    }
    return 0;
}

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
    int n;
    cin >> n;
    if (n % 2 == 0) {
        cout << "no" << endl;
        return;
    }
    else cout << "yes" << endl;
    int i;
    for(i = 1; i <= (n+1)/2; i++) {
        cout << i << " " << i + (n + (n/2)) << endl;
    }
    for (; i <= n; i++ ) {
       cout << i << " " << i + ((n/2)) << endl; 
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
    }
    return 0;
}

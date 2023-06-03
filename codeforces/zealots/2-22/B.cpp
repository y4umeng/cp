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
    if (n == 3) {
        cout << "no";
        return;
    }
    cout << "yes" << "\n";
    
    if (n % 2 == 0) {
        n /= 2;
        while (n--) {
            cout << 1 << " " << -1 << " ";
        }
        return;
    }
    
    for (int i = 0; i < n; i++) {
        cout << ((i%2==0) ? (-(n-1)/2 + 1) : ((n-1)/2)) << " ";
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

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
    int l1, l2, l3;
    cin >> l1 >> l2 >> l3;
    if (l1 + l2 == l3 or l1+l3 == l2 or l2+l3==l1) cout << "yes";
    else if ((l1 == l2) and l3 % 2 == 0) cout << "yes";
    else if ((l2 == l3) and l1 % 2 == 0) cout << "yes";
    else if ((l1 == l3) and l2 % 2 == 0) cout << "yes";
    else cout << "no";
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
        cout << "\n";
    }
    cout << endl;
    return 0;
}

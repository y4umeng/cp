#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n, k; cin >>n>>k;
    int l , r;
    bool left, right;
    left = right = false;
    for(int i = 0; i < n; i++) {
        cin >> l >> r;
        if (l==k) left = true;
        if (r == k) right= true;
    }
    if (left and right) cout << "yes";
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
        cout << endl;
    }
    return 0;
}

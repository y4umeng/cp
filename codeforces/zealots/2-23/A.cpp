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
    int a, b;
    cin >> a >> b;
    if (!a or !b) {
        cout << 0; return;
    }
    if (a > b) swap(a, b);
    if(b/a >= 3){
        cout << a; 
    }
    else if (b/a >= 2) {
        cout << b/3 + (min((a-b/3)/2, (b%3)/2));
    }
    else if (b/a >= 1) cout << a/2;

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

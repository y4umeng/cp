#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
using namespace std;
#define mod 1000000007
void solve(int z, int o)
{
    int diff = abs(z - o);
    int mn = min(z, o);
    int mx = max(z, o);
    bool n = z > o;
    if (!diff) diff++;
    while (mn >= diff) {
        for (int i = 0; i < diff; i++) { 
            cout << n;
            mx--; 
        }
        for (int i = 0; i < diff; i++) { 
            cout << !n;
            mn--; 
        }
    }
    while(mn-- > 0) {cout << n;}
    while(mx-- > 0) {cout << !n;}

    return;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
#endif

    int test, zeros, ones;
    cin>>test;
    while(test--)
    {
        cin >> zeros;
        cin >> ones;
        solve(zeros, ones);
        cout << endl;
    }
    return 0;
}

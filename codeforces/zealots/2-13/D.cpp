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
    ll computers, cables;
    cin >> computers;
    cin >> cables;
    ll updated = 1;
    ll depth = 0;
    while (updated < computers) {
        if (pow(2, depth) <= cables) {
            updated *= 2;
        }
        else {
            depth += (computers-updated+cables-1)/cables;
            break;
        }
        depth++;
    }
    cout << depth;
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

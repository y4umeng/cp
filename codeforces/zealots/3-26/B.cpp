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
    string line;
    char c = 0;
    vector<int> down (8);
    for(int i = 0; i < 8; i++) {
        cin >> line;
        if (line == "RRRRRRRR") {
            c = line[2];
        }
    }

    if (c) {
        cout << 'R';
    }
    else cout << 'B';
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

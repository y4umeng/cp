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
    vector<int> lower(26);
    vector<int> upper(26);
    int len, k;
    cin >> len >> k;
    char c;

    for(int i = 0; i < len; i++) {
        cin >> c;
        if (c >= 'a' ) {
            lower[c - 'a']++;
        }
        else {
            upper[c - 'A']++;
        }
    }

    int count = 0;

    for(int i = 0; i < 26; i++) {
        count += min(lower[i], upper[i]);
        int sw = abs(lower[i] - upper[i])/2;
        count += min(k, sw);
        k -= min(k, sw); 
    }

    cout << count;
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

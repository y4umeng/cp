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
    int len; cin >> len;
    vector<int> h;
    int n;
    for(int i = 0; i < len; i++) {
        cin >> n;
        h.push_back(n);
    }
    sort(h.begin(), h.end());
    int dmg = 0;
    int spells = 0;

    for(int i = 0; i < len; i++) {
        
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

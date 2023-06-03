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
    int x; cin >> x;
    string w; cin >> w;
    ll realSize = w.size();
    for(int l = 0;l<x;l++) {
        if(w[l]=='1') continue;
        if(w.size() < x) {
            if(w[l] == '2') w += w.substr(l+1, w.size());
            else w += w.substr(l+1, w.size()) + w.substr(l+1, w.size());
            realSize = w.size();
        }
        else {
            realSize = l + 1 + ((realSize-l-1)*(w[l] - '0') % mod);
        }
    }
    cout << realSize;
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

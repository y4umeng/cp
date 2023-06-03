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
    int n;
    vector<int> a, b;
    for(int i = 0; i < len; i++) {
        cin >> n; a.push_back(n);
    }
    for(int i = 0; i < len; i++) {
        cin >> n; b.push_back(n);
    }
    int maxA, maxB;
    maxA = a[a.size()-1];
    maxB = b[b.size()-1];
    for(int i = 0; i < len; i++) {
        if ((a[i] <= maxA and b[i] <= maxB) or (a[i] <= maxB and b[i] <= maxA)) {
            continue;
        }
        else {
            cout << "no";
            return;
        }
        
    }
    cout << "yes";
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

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
    int n, k; cin >> n >> k;
    int num;
    vector<int> a (n);
    for(int i = 0; i < n; i++) {
        cin >> num;
        a[i] = num;
    }
    int firstBad = -1;
    int secondBad = -1;
    for(int i = 0; i < n; i++) {
        if(abs(i+1 - a[i]) % k) {
            if(firstBad < 0) firstBad = i;
            else if (secondBad < 0) secondBad = i;
            else {
                cout << -1;
                return;
            }
        }
    }
    if (firstBad < 0 and secondBad < 0) {
        cout << 0; return;
    }
    if (firstBad >= 0 and secondBad >= 0) {
        if (abs(secondBad+1 - a[firstBad]) % k == 0 and abs(firstBad+1 - a[secondBad]) % k == 0) {
            cout << 1; 
            return;
        }
        else {
            cout << -1;
            return;
        }

    }
    for(int i = 0; i < n; i++) {
        if (abs(i+1 - a[firstBad]) % k == 0 and abs(firstBad+1 - a[i]) % k == 0) {
            cout << 1; 
            return;
        }
    }
    cout << -1; 
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

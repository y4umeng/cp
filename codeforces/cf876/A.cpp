#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()

// https://codeforces.com/contest/1839/problem/A

{
    int n , k; cin >> n >> k;
    if (k == 1) { cout << n; return; }
    int ones = 0;
    vector<int> arr (n);
    for(int i = 0; i < n; i++) {
        if(arr[i]) ones++;
        if (ceil((i+1)/double(k)) > ones) {
            if(i < n/2) {
                ones++;
                arr[n-i-1] = 1;
            }
            else {
                ones++;
            }
        }
    }
    cout << ones;

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

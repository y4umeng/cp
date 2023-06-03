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
    int left = 1;
    int right = n;
    int count = 0;
    while (count < n) {
        int i = 0;
        while (i++ < k-1 and count < n-1) {
            cout << right-- << " ";
            count++;
        }
        cout << left++ << " ";
        count++;
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

#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
#define ll long long
#define mod 1000000007
ll help(vector<int> a, int mxIndex) {
    int n = a.size();
    ll ans = a[mxIndex];
    for(int i = 0; i < n; i++) {
        if (i == mxIndex) continue;
        while(a[i] % 2 == 0) {
            ans *= 2;
            a[i]/= 2;
        }
    }

    for(int i = 0; i < n; i++) {
       if (i == mxIndex) continue;
       ans += a[i]; 
    }

    return ans;
}
void solve()
{
    int n; cin >> n;
    vector<int> a (n);
    int num;
    ll ans = 0;
    int mxIndex = 0;
    for(int i = 0; i < n; i++) {
        cin >> num; a[i] = num;
        if (num > ans) {
            ans = num;
            mxIndex = i;
        }
    }

    for(int i = 0; i < n; i++) {
        ans = max(ans, help(a, i));
    }
    cout << ans;
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

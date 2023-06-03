#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int len; cin>>len;
    vector<int> a (len);
    vector<int> b (len);
    int n;
    for(int i = 0; i < len; i++) {
        cin >> n; a[i] = n;
        cin >> n; b[i] = n;
    }
    int d = 1;
    int begin = 0;
    ll LCM = b[0];
    for(int i = 1; i < len; i++) {
        if (lcm(LCM, b[i]) == LCM and !(a[i] % (LCM / b[i]))) continue;
        LCM = lcm(LCM, b[i]);
        for(int j = begin; j <= i; j++) {
            if (a[j] % (LCM / b[j])) {
                d++;
                begin = i;
                LCM = b[i];
                break;
            }
        }
    }
    cout << d;
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

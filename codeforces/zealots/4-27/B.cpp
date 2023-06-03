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
    int n, num; cin >> n;
    vector<int> a (n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int mn = *min_element(a.begin(), a.end());
    mn *= 2;
    int count = 0;
    for (auto num: a) {
        int add = 1;
        while (num >= mn) {
            num = (num/2) + (num%2);
            cout << num << endl;
            cout << add << endl;
            count+= add;
            if (num > mn) add*=2;
        }
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

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define mod 1000000007
void solve(int len, int q)
{
    vector<int> nums;
    vector<int> sums;
    int n;
    int s;
    int m;
    while (len--) {
        cin >> n;
        nums.push_back(n);
        s = 0;
        while (n> 0) {
            m = n % 10;
            s += m;
            n /= 10;
        }
        sums.push_back(s);
    }

    //vector<vector<int>> switches;
    while (q--) {
        cin >> n;
        if (n == 1) {
            cin >> n;
            cin >> s;
            while(s-- >= n) {
                nums[s] = sums[s];
            }
        }
        else {
            cin >> n;
            cout << nums[n] << endl;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test=1;
    cin>>test;
    while(test--)
    {
        int len;
        int q;
        cin >> len;
        cin >> q;
        solve(len, q);
        cout << endl;
    }
    return 0;
}

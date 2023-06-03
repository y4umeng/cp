#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <numeric>
#include <algorithm>
using namespace std;
#define ll long long
#define mod 1000000007
void solve(int len)
{
    vector<int> nums;
    int n;
    for (int i = 0; i < len; i++) {
        cin >> n;
        nums.push_back(n);
    }
    vector<int> order (len);
    iota(order.begin(), order.end(), 0);
    sort(order.begin(), order.end(), [&](int i, int j) {
        return nums[i] > nums[j];
    });
    vector<int> ans (len);
    int sum = 0;
    ans[order[0]] = 0;
    for ( int i = 0; i< len; i ++) {
        sum += 2* ((i/2 + 1)*nums[order[i]]);
        ans[order[i]] = ((i%2) ? (i/2 + 1) : (-(i/2)-1));
    }
    cout << sum << "\n";
    cout << 0 << " ";
    for (auto num: ans) cout << num << " ";
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
        int len;
        cin >> len;
        solve(len);
        cout << endl;
    }
    return 0;
}

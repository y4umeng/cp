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
    int len;
    cin >> len;
    vector<int> nums;
    int n;
    for(int i = 0; i < len; i++) {
        cin >> n;
        nums.push_back(n);
    }
    bool done = false;
    if(nums[0] == 1) nums[0]++;
    while(!done) {
        done = true;
        for(int i = 1; i < len; i++) {
            if (nums[i] == 1) { nums[i]++; done = false; }
            else if (nums[i] % nums[i-1] == 0) { nums[i]++; done = false; }
        }
    }
    for(auto num: nums) cout << num << " ";
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

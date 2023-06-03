#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long
#define mod 1000000007

int bins (int target, vector<int> nums) {
    int left = 0;
    int right = nums.size() -1;
    while (left < right) {
        int mid = left + (right-left)/2;
        if (nums[mid] >= target) right = mid;
        else left = mid + 1;
    }
    if(nums[left] == target) return left;
    return -1;
}

void solve()
{
    int len, x, n;
    cin >> len;
    cin >> x;
    vector<int> nums;
    for (int i = 0; i < len; i++) {
        cin >> n;
        nums.push_back(n);
    }
    
    int count = 0;

    sort(nums.begin(), nums.end());

    int size = nums.size();

    for (int i = 0; i < nums.size(); i++) {
        int index = bins(nums[i] * x, nums);
        if (index != -1) {
            nums.erase(nums.begin()+i);
            nums.erase(nums.begin() + index-1);
            i--;
            count += 2;
        }
    }

    cout << size - count;

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

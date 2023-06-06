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
    int len; cin >> len;
    vector<int> nums (len);
    for(int i = 0; i < len; i++) {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    int left = 0;
    int right = len -1;
    int mn = INT_MAX;
    while(left + 1 < right) {
        int leftM = (nums[left] - nums[0] + 1)/2;
        int rightM = (nums[len-1] - nums[right] + 1)/2;
        int midM = (nums[right-1] - nums[left+1] + 1)/2;
        cout << leftM << " " << midM << " " << rightM << endl;
        int mx =  max(leftM, max(rightM, midM));
        mn = min(mn, mx);
        if(leftM > rightM) right--;
        else left++;
    }
    cout << mn;
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

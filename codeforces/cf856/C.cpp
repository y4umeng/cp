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
    for(int i = 0 ; i < len; i++) {
        cin >> n;
        nums.push_back(n);
    }
    int maxLen = 1;
    cout << maxLen << " ";
    int left, right, mid;
    for(int i = 1; i < len; i++) {

        left = i - maxLen;
        right = i;

        while(left < right) {
            mid = left + (right - left)/2;
            if(nums[mid] >= i - mid + 1) right = mid;
            else if (nums[mid] < i-mid+1) left = mid + 1;
        }

        maxLen = i - left + 1;
        cout << maxLen << " ";
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

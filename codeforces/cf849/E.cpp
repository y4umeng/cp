#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define mod 1000000007
void solve(int len)
{
    vector<int> nums;
    int n;
    for(int i = 0; i < len; i ++) {
        cin >> n;
        nums.push_back(n);
    }
    for (int i = 0;  i< len -1; i ++) {
        if (nums[i] + nums[i+1] < -(nums[i] + nums[i+1])) {
            nums[i] *= -1;
            nums[i+1] *= -1;
        }
    }
    int sum = 0;
    for (int i = 0; i < len; i ++) {
        sum += nums[i];
    }
    cout << sum;
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
        cin >> len;
        solve(len);
        cout << endl;
    }
    return 0;
}

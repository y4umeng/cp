#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long
#define mod 1000000007
void solve(ll len)
{
    vector<int> nums;
    int n;
    for(int i = 0; i < len; i++) {
        cin >> n;
        nums.push_back(n);
    }
    sort(nums.begin(), nums.end());

    int sets = 1;
    int currSets = 1;
    int dups = 1;
    for(int i = 1; i < len; i ++) {
        if (nums[i] > nums[i-1] + 1) {
            sets++;
            currSets = 1;
            dups = 1;
        }
        else if (nums[i] == nums[i-1]) {
            dups++;
        }
        else {
            if (dups < currSets) {
                currSets = dups;
            }
            dups = 1;
        }
        if (dups > currSets) {
            sets++;
            currSets++;
        }
    }
    cout << sets;
    return;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    ll test, len;
    cin>>test;
    while(test--)
    {
        cin >> len;
        solve(len);
        cout << endl;
    }
    return 0;
}

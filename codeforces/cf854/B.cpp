#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int len, num, first;
    cin >> len;
    vector<int> nums;
    bool allSame = true;

    for(int i = 0; i < len; i++) {
        cin >> num;
        if(!i) first = num;
        nums.push_back(num);
        if(num != first) {
            allSame = false;
        }
    }
    if (allSame) { cout << 0 << "\n"; return; }

    num = 1;
    vector<vector<int>> ans;
    cout << "start" << endl;
    while (true) {
        if (nums[0] > nums[num]) { 
            nums[0] = (nums[0] + nums[num] - 1) / nums[num]; 
            ans.push_back({1, num+1}); }
        else if (nums[0] < nums[num]) { 
            nums[num] = (nums[num] + nums[0] - 1) / nums[0]; 
            ans.push_back({num+1, 1}); }
        else num++;
        num %= len;

        if(nums[0] == 2) {
            num = 0;
            break;
        }
        else if (nums[num] == 2) {
            break;
        }
    }
    cout << "end" << endl;
    for(int i = 1; i < len; i++) {
        if(nums[i] == 1) {
            cout << -1 << "\n"; return;
        }
        while(nums[i] != 2) {
            nums[i] = (nums[i] + 1) / 2;
            ans.push_back({i+1, num}); 
        }
    }
    
    cout << ans.size() << "\n";
    for (auto v : ans) {
        cout << v[0] << " " << v[1] << '\n';
    }

    cout << endl;
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
    }
    cout << endl;
    return 0;
}

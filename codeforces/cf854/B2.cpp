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
    int len, num, first, mn;
    cin >> len;
    vector<int> nums;
    bool allSame = true;
    mn = 0;
    for(int i = 0; i < len; i++) {
        cin >> num;
        if(!i) first = num;
        nums.push_back(num);
        if(num != first) {
            allSame = false;
        }
        if (num < nums[mn]) {
            mn = i;
        }
    }

    if (allSame) { cout << 0 << "\n"; return; }
    if (nums[mn] == 1) { cout << -1 << "\n"; return; }

    bool done = false;
    vector<vector<int>> ans;

    while(!done) {
        done = true;
        for(int i = 0; i < len; i++) {

            if (nums[i] == 1) {
                cout << -1 << "\n";
                return;
            }

            while(nums[i] > nums[mn]) {
                done = false;
                nums[i] = (nums[i] + nums[mn] - 1) / nums[mn]; 
                ans.push_back({i+1, mn + 1}); 
            }

            if (nums[i] < nums[mn]) mn = i;
        }
    }

    cout << ans.size() << "\n";
    for (auto v : ans) {
        cout << v[0] << " " << v[1] << '\n';
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
    }
    cout << endl;
    return 0;
}

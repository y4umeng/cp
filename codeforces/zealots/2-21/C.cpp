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
    int len;
    cin >> len;
    int n;

    vector<int> nums;
    for (int i = 0; i < len; i ++) {
        cin >> n;
        nums.push_back(n);
    }
    bool down = false; 
    for (int i = 1; i < len; i ++) {
        if (nums[i] < nums[i-1]) {
            if(!down) down = true;
        }
        else if (nums[i] > nums[i-1]) {
            if (down) {
                cout << "no";
                return;
            }
        }
    }

    cout << "yes";
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

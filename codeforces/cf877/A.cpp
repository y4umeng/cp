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
    int n; cin >> n; 
    vector<ll> nums (n);
    ll num;
    for(int i = 0; i < n; i++) {
        cin >> num;
        nums[i] = num;
    }
    
    for(auto i: nums) {
        if(i < 0) {
            cout << i; return;
        }
    }
    cout << *max_element(nums.begin(), nums.end()); return;
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

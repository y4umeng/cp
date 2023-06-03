#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
using namespace std;
#define mod 1000000007
void solve(int len)
{
    int numTwos = 0;
    int n;
    vector<int> nums;
    for (int i = 0; i < len; i++) {
        cin >> n;
        nums.push_back(n);
        if (n == 2) {
            numTwos++;
        }
    }
    if (numTwos % 2 == 1) {
        cout << -1;
        return;
    }
    if (numTwos == 0) {
        cout << 1;
        return;
    }
    int frontTwos = 0;
    for (int i = 0; i < len-1; i++) {
        if (nums[i] == 2) {
            frontTwos++;
            numTwos--;
            if (frontTwos == numTwos) {
                cout << i+1;
                return;
            }
        }
    }

    return;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int test;
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

#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <unordered_set>
using namespace std;
#define ll long long
#define mod 1000000007

bool checkSum (int k, int len, int nw, int old) {

    if (nw == old) return true;

    if (nw < old) return checkSum(k, len, old, nw);

    // cout << old << " " << nw << endl;

    vector<bool> dp (nw - old + 1, false);
    dp[0] = true;

    for(int i=1; i <= nw - old; i++) {

        if(i - k >= 0 and dp[i-k]) {
            dp[i] = true;
        }
        else if (i - k - 1 >= 0 and dp[i-k-1]) {
            dp[i] = true;
        }
        else if (i > nw-old-k) {
            if(k - (nw - i) <= old) return true;
            if(nw - i <= len - i) return true;
        }

        else if (i - 1 >= 0 and dp[i-1] and (old + i < len - k or old + i > k + 1)) {
            dp[i] = true;
        }
        // else cout << old << " " << i << " " << len << " " << k << " " << "NONE" << endl;
    }
    // cout << "ANS: " << dp[nw-old] << endl;
    return dp[nw-old];
}


void solve()
{
    int n, k;
    cin >> n >> k;
    vector<unordered_set<int>> og (26);
    vector<unordered_set<int>> nw (26);
    char c;
    for(int i = 0; i < n; i++) {
        cin >> c;
        og[c - 'a'].insert(i);
    }
    
    for(int i = 0; i < n; i++) {
        cin >> c;
        nw[c - 'a'].insert(i);
    }

    for(int i = 0; i < 26; i++) {
        for(auto newIndex : nw[i]) {
            bool found = false;
            for(auto oldIndex : og[i]) {
                if (checkSum(k, n, newIndex, oldIndex)) {
                    og[i].erase(oldIndex);
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << newIndex << endl;
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

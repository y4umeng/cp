#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long
#define mod 1000000007
void solve(int len)
{
    vector<int> nums;
    vector<int> indexs (len, 0);
    vector<char> votes;
    int n;
    for(int i = 0; i < len; i ++) {
        cin>>n;
        nums.push_back(n);
        indexs[n-1] = i;
    }

    char c;
    int numDislikes = 0;
    for(int i = 0; i < len; i++) {
        cin >> c;
        if (c=='0') numDislikes++;
        votes.push_back(c);
    }
    
    int likes = numDislikes + 1;
    int dislikes = 1;
    vector<int> ans (len, 0);
    for(int i = 0; i < len; i++) {
        if(votes[indexs[i]] == '1') {
            ans[indexs[i]] = likes;
            likes++;
        }
        else {
            ans[indexs[i]] = dislikes;
            dislikes++;
            numDislikes--;
        }
    }

    for(int i = 0; i<len; i++) {
        cout << ans[i] << " ";
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
        ll len;
        cin >> len;
        solve(len);
        cout << endl;
    }
    return 0;
}

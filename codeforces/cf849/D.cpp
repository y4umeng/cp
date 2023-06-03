#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define mod 1000000007
void solve(int len)
{
    char c;
    int counts[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    while(len--) {
        cin >> c;
        counts[c-'a']++;
    }
    int sum = 0;
    for (int i = 0; i < 26; i++) {
        if (counts[i] == 1) sum++;
        if (counts[i] > 1) sum += 2;
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

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define mod 1000000007
void solve(int len)
{
    vector<char> binary;
    char c;
    int i = 0;
    for (; i < len; i++) {
        cin >> c;
        binary.push_back(c);
    }
    i = 0;
    for (; i < len/2; i++) {
        if (binary[i] == binary[len-1-i]) {
            cout << len - (2*i);
            return;
        }
    }
    cout << len - (2*i);
    return;
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

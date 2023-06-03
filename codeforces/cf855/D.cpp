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
    int len;
    cin >> len;

    string w = "";
    char c, c2;
    for(int i = 0; i < len; i++) {
        cin >> c;
        w += c;
    }
    int i = 0;
    ll count = 0;
    while(i < len-1) {
        count++;
        c = w[i];
        c2 = w[i+1];
        while(((w[i] == c and w[i+1] == c2) or (w[i] == c2 and w[i+1] == c)) and i<len-1) {
            i++;
        }
    }
    cout << count;
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

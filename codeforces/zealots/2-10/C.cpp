#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
#define ll long long
#define mod 1000000007
void solve(int len)
{
    int prev;
    int n;
    string ans = "yes";
    bool up = true;
    cin >> prev;
    len--;
    while (len--) {
        cin >> n;
        if (n < prev and up) up = false;

        else if (n > prev and !up) {
            ans = "no";
        }
        prev = n;
    }

    cout << ans;
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

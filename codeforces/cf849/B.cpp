#include <stdio.h>
#include <iostream>
using namespace std;
#define ll long long
#define mod 1000000007
void solve(int len)
{
    int x = 0;
    int y = 0;
    bool done = false;
    while (len--) {
        //cout << x << " ";
        //cout << y << "   ";
        char c;
        cin >> c;
        if (done) continue;
        if (c=='U') y++;
        else if (c=='D') y--;
        else if (c=='L') x--;
        else if (c=='R') x++;
        if (x==1 && y ==1) {
            cout << "YES";
            done = true;
        }
    }

    if (!done) cout << "NO";
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

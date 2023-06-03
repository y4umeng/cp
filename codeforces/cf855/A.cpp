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
    string meow = "";
    char c;
    int i = 0;

    for(; i < len; i++) {
        cin >> c;
        meow += c;
    }

    string lets = "mMeEoOwW";
    i = 0;
    for(int j = 0; j < 8; j+= 2) {
        if (i == len) {
            cout << "NO";
            return;
        }
        if(meow[i] != lets[j] and meow[i] != lets[j+1]) {
            
            cout << "NO";
            return;
        }

        while((meow[i] == lets[j] or meow[i] == lets[j+1]) and i < len) {
            i++;
        }

    }
    if(i == len) cout << "YES";
    else cout << "NO";


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

// #include <bits/stdc++.h>
#include <iostream>
#include<vector>
#include <string>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    string cf = "cdforces";
    char let;
    cin >> let;
    
    for (int i = 0; i < 8; i++) {
        if (cf[i] == let) {
            cout << "YES";
            return;
        } 
    }
    
    cout << "NO";
    return;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
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

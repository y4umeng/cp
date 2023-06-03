#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int len;
    cin >> len;
    char let;
    vector<char> lets;
    for (int i = 0; i < len; i++) {
        cin >> let;
        lets.push_back(let);
    }

    int a, b, c, l;
    a = b = c = l = 0;
    int mn = -1;

    for (int i = 0; i < len; i++) {
        // cout << mn << endl;
        if (lets[i] == 'a') {
            if(l) { 
                mn = l + 1; 
                b = c = l = a = 0;
            }
            l++;
            a++;
        }

        else if (lets[i] == 'b') { b++; l++; }
        else if (lets[i] == 'c') { c++; l++; }
        if (b > a or c > a or (l >= mn and mn > 1)) {
            a = b = c = l = 0;
        }
    }
    
    cout << mn;
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

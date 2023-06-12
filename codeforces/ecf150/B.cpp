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
    int n; cin >> n;
    int q;
    int front, back;
    cin >> front; cout << 1;
    back = front;
    bool shift = false;

    for(int i = 1; i < n; i++) {
        cin >> q;
        
        if(!shift && q >= back) {
            cout << 1; back = q;
        }
        else if(shift && q >= back && q <= front) {
            cout << 1; back = q;
        }
        else if(!shift && q <= front) {
            shift = true;
            back = q;
            cout << 1;
        }
        else cout << 0;
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
        solve();
        cout << endl;
    }
    return 0;
}

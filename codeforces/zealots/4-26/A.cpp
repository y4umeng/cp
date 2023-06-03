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
    vector<int> enem (n);
    vector<int> me (n);
    char b;
    for(int i = 0; i < n; i++) {
        cin >> b;
        enem[i] = b - '0';
    }
    for(int i = 0; i < n; i++) {
        cin >> b;
        me[i] = b - '0';
    }

    int count = 0;
    for(int i = 0; i < n; i++) {
        if (me[i]==0) continue;
        else if (enem[i] == 0) count++;
        else if (i>0 and enem[i-1] == 1) count++;
        else if (i < n-1 and enem[i+1] == 1) {
            count++;
            enem[i+1] = 2;
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

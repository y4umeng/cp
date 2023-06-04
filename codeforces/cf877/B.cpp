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
    int len; cin >> len;
    int num;
    int one, two, max;
    for(int i = 1; i <= len; i++) {
        cin >> num;
        if(num == 1) one = i;
        else if(num == 2) two = i;
        else if (num == len) max = i;
    }
    if((max < one && max > two) or (max < two && max >one)) {
        cout << one << " " << one;
    }
    else if ((two < one && two > max) or (two < max && two > one)) {
        cout << two << " " << max; 
    }
    else {
        cout << one << " " << max; 
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

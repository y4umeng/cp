#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
using namespace std;
#define mod 1000000007
void solve()
{
    int num, i1, i2, mn, mx;
    cin >> num;
    i1 = 1;
    i2 = num*2;
    if (num % 2 == 0) {
        cout << "no" << endl;
        return;
    }
    else cout << "yes" << endl;

    cout << i1 << " " << i2 << endl;
    mn = i1;
    mx = i2;
    i1++;
    i2--;
    
    while (i1 < i2) {
        mn = -i1 + i2-1;
        mx = -i1 + 1 + i2;
        cout << i1 << " " << i2-1 << endl;
        cout << i1 +1 << " " << i2 << endl; 
        i1+=2;
        i2-=2;
    }


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
        solve();
    }
    return 0;
}

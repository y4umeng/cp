#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
using namespace std;
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    if (n==1) {
        cout << 3;
        return;
    }
    if (n == 2) {
        cout << 5;
        return;
    }
    int m =int((n+2)/3) * 4;
    if (n % 3 == 0) m+=3;
    else if ((n + 1) % 3 == 0) m++;
    
    cout << m;
    return;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
#endif

    int test = 1;
    //cin>>test;
    while(test--)
    {
        solve();
        cout << endl;
    }
    return 0;
}

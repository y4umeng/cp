#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
#define mod 1000000007
void solve()
{
    long long n;
    cin >> n;
    double sq = floor(sqrt(n));
    double cube = floor(cbrt(n));
    double sixth = floor(pow(n, 1.0/6));

    cout << (sq + cube - sixth);

    //cout << floor(pow(64000000, 1/3.0));
    // wrong on test case 5...
    // https://codeforces.com/group/hosRkEuluH/contest/426243/problem/A
    
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
        cout << endl;
    }
    return 0;
}

#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
#define mod 1000000007
#define ll long long
void solve()
{
    ll num;
    int dig;
    cin >> num;
    if(num % 2 == 0) {
        cout << num/2 << " " << num/2;
        return;
    }
    num++;
    ll half1 = 0;
    ll half2 = 0;
    int mult  = 0;
    int offset = 1;

    if (((num/2)) % 10 == 0) {
        num--;
        while(num) {
            dig = num % 10;
            num /= 10;
            //cout << dig << " ";
            if (dig % 2 == 0) {
                half1 += (dig/2) * pow(10, mult);
                half2 += (dig/2) * pow(10, mult);
            }
            else {
                half1 += (((dig+1)/2)-offset) * pow(10, mult);
                half2 += (((dig+1)/2)-!offset) * pow(10, mult);
                offset = !offset;
            }
            mult++;
        }
        cout << half1 << " " << half2;
    }
    else {
        cout << ((num/2)) << " " << (num/2) -1;
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
        cout << endl;
    }
    return 0;
}

#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
using namespace std;
#define mod 1000000007
void solve()
{
    int k, n; // k = length of array, n = max val in array
    cin >> k;
    cin >> n;

    int count = 1;
    int sum = 1;
    while (k--) {
        cout << sum << " ";
        // cout << " n, count, k: " << n << " " << count << " " << k << " ";
        if (n-sum-count < k-1) {
            // cout << "HERE" << " ";
            // k++;
            sum++;
            while(k--) {
                cout << sum++ << " ";
            }
            break;
        }

        sum += count;
        count++;  

    }
    return;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
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

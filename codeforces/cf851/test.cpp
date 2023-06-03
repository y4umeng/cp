#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
#define ll long long
#define mod 1000000007

#define SIEVE
const int N = 10000000;
int primes[N];
vector<int> pr;
void sieve() {
    for(ll i = 2; i < N; i++) {
        if (primes[i] == 0) {
            pr.push_back(i);
            for(ll j = i*i; j < N; j+=i) {
                primes[j] = 1;
            }
        }
        primes[i] ^= 1;
    }
}

void solve()
{
    sieve();
    cout << primes[1000033];
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

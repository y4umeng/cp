#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
#define ll long long
#define mod 1000000007

#define SIEVE
const ll N = 1000;
ll primes[N];
vector<int> pr;
void sieve() {
    for(ll i = 2; i< N; i++) {
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

#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
#define ll long long
#define mod 1000000007

#define SIEVE
const ll N = 1001;
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
    int n, m; cin >> n >> m;
    int begin = 1;
    int row = 0;
    if(!primes[n] and primes[m]) {
        for(int i = 1; i <= n; i++) {
            for(int j = i; j <= i + (n*(m-1)); j+=n) {
                cout << j << " ";
            }
            cout << '\n';
        }
        return;
    }

    while(row < n) {
        if(begin > n*m) begin = 1 + m;
        for(int i = begin; i < begin + m; i++) cout << i << " ";
        cout << '\n';
        begin += (2*m);
        row++;
    }
    return;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    sieve();
    ll test;
    cin>>test;
    while(test--)
    {
        solve();
        cout << endl;
    }
    return 0;
}

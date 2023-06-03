#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
#define ll long long
#define mod 1000000007

 
int phi(int n) {
	int result=n;
	for (int i=2; i*i<=n; i++) {
		if(n%i==0) result-=result/i;
		while(n%i==0) n/=i;
	}
	if(n>1) result-=result/n;
	return result;
}
 
ll exp(ll a, ll b, ll m) {
	ll r=1;
	while(b) {
		if(b%2) r=(r*a)%m;
		a=(a*a)%m;
		b/=2;
	}
	return r;
}
 
ll inv(ll a, ll m) {
	return exp(a, phi(m)-1, m);
}
 
ll invp(ll a, ll m) {
	return exp(a, m-2, m);
}
 
const int mx=1e6+5;
 
ll fact[mx];
 
ll combi(int n, int x) {
	ll p=fact[n], q=fact[x], r=fact[n-x];
	ll ret=p;
	ret=(ret*invp(q,mod))%mod;
	ret=(ret*invp(r,mod))%mod;
	return ret;
}
bool good (int a, int b, ll num) {
    while(num) {
        int dig = num % 10;
        if (dig != a and dig != b) return false;
        num /= 10;
    }
    return true;
}
void solve()
{
    fact[0] = 1;
    for(int i = 1; i < mx; i++) {
        fact[i] = (fact[i-1] * i) % mod;
    }
    ll ans = 0;
    ll a, b, n;
    cin >> a >> b >> n;
    for(int k = 0; k <= n; k++) {
        if(good(a, b, k*a + (n-k) * b)) {
            ans += combi(n, k) % mod;
            ans %= mod;
        }
    }
    cout << ans;
    return;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

        solve();
        cout << endl;
    
    return 0;
}

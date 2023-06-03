//worms

#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
#define ll long long
#define mod 1000000007
vector<ll> worms;

int bins (int n) {
    int left = 0;
    int right = worms.size()-1;
    while (left < right) {
        int mid = left + (right - left) /2;

        if (worms[mid] < n) left = mid + 1;
        else right = mid;
    }
    return left;
}
void solve()
{
    int len; cin >> len;
    worms.push_back(0);
    ll n;
    for(int i = 0; i < len; i++) {
        cin >> n;
        worms.push_back(worms[i] + n);
    }

    int len2; cin >> len2;
    for(int i = 0 ; i < len2; i++){
        cin >> n;
        cout << bins(n) << "\n";
    }
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

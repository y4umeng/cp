#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <queue>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()

// https://codeforces.com/contest/1839/problem/B
// failed pretest 3
{
    int n; cin >> n;
    int a, b;
    vector<pair<int, int> > arr (n);
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        arr[i] = make_pair(a, b);
    }
    sort(arr.begin(), arr.end(), [&](pair<int, int> x, pair<int, int> y) {
        if (x.first == y.first) {
            return x.second > y.second;
        }
        else return x.first < y.first;
    });
    for(auto p : arr) cout << p.first << " " << p.second << endl;
    int points = 0;
    int on = 0;
    int maxOn = 0;
    priority_queue <int, vector<int>, greater<int> > pq;
    for(auto p: arr) {
        if (maxOn >= p.first) continue;
        points += p.second;
        on++;
        maxOn = max(maxOn, on);
        pq.push(p.first);
        while(!pq.empty() && pq.top() <= maxOn) {
            pq.pop();
            on--;
        }

    }
    cout << points;
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

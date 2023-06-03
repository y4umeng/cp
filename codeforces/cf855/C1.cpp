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
{
    // also solved C2
    priority_queue<int> maxHeap;
    int len;
    cin >> len;
    int n;
    ll army = 0;
    while (len--) {
        cin >> n;
        if(n) maxHeap.push(n);
        else {
            if(!maxHeap.empty()) {
                army += maxHeap.top();
                maxHeap.pop();
            }
        }
    }
    cout << army;
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

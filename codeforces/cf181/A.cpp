#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <stack>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int len, num; cin >> len;
    stack<int> neg; stack<int> pos;
    for (int i = 0; i < len; i++) {
        cin >> num;
        if (num < 0) neg.push(num);
        if (num > 0) pos.push(num);
    }
    cout << 1 << " " << neg.top() << "\n";
    neg.pop();

    if(pos.size()) {
        cout << 1 << " " << pos.top() << "\n";
        pos.pop();
    }
    else {
        cout << 2 << " " << neg.top() << " ";
        neg.pop();
        cout << neg.top() << "\n";
        neg.pop();
    }
    cout << 1 + pos.size() + neg.size() << " " << 0 << " ";
    while(!pos.empty()) {
        cout << pos.top() << " "; pos.pop();
    }
    while (!neg.empty()) {
        cout << neg.top() << " "; neg.pop();
    }
    
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

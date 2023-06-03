#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;
#define mod 1000000007
void solve()
{

    // FAILED TEST 2
    
    std:string line;
    cin >> line;

    map <int, char> lineOne;
    vector<int> cols;

    for(int i = 0; i < 8; i++) {
        lineOne[i] = line[i];
        cols.push_back(i);
    }

    for(int i = 1; i < 8; i++) {
        if (line.compare("RRRRRRRR") == 0 or line.compare("BBBBBBBB") == 0) {
            cout << line[0];
            cols.clear();
        }
        for(int j = 0; j < cols.size(); j++) {
            if (lineOne[cols[j]] != line[cols[j]]) {
                cols.erase(cols.begin() + j);
            }
        }
        cin >> line;
    }
    if(cols.size() > 0) cout << lineOne[cols[0]];
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

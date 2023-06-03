#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n, m; cin >> n >> m;
    vector<int> teams (n+1);
    map <int, vector<int>> mp;
    int team = 1;
    int p1, p2;
    for(int i = 0; i < m; i++) {
        cin >> p1 >> p2;
        if(teams[p1] == teams[p2]) {
            if(teams[p1] == 0) {
                teams[p1] = teams[p2] = team;
                mp[team].push_back(p1);
                mp[team].push_back(p2);
                team++;
            }
        }
        else if (teams[p1] and !teams[p2]) {
            teams[p2] = teams[p1];
            mp[teams[p1]].push_back(p2);
        }
        else if (teams[p2] and !teams[p1]) {
            teams[p1] = teams[p2];
            mp[teams[p2]].push_back(p1); 
        }
        else if (teams[p1] and teams[p2]) {
            cout << -1;
            return;
        }
    }
    int p3 = 1;
    for(int i = 1; i <= n/3; i++) {
        if (mp[i].size() > 3) {
            cout << -1; return;
        }
        for(auto p : mp[i]) {
            cout << p << " ";
        }
        for(int j = 0; j < 3 - mp[i].size(); j++) {
            while(teams[p3]) { p3++; }
            cout << p3++ << " ";
        }
        cout << "\n";
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

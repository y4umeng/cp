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
    int alarms, h, m; cin >> alarms >> h >> m;
    int sleep = 60 * h + m;
    int H, M;
    int mn = 1440;
    for(int i = 0; i < alarms; i++) {
        cin >> H >> M;
        int alarm = 60 * H + M;
        if(alarm < sleep) {
            mn = min(mn, 1440 - sleep + alarm);
        }
        else mn = min(mn, alarm - sleep);
    }

    cout << mn/60 << " " << mn % 60;

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

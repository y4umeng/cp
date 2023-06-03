#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int len;
    cin >> len;
    string word;
    vector<string> words;
    for(int i = 0; i < 2*(len-1); i++) {
        cin >> word;
        if(word.size() == len-1) {
            words.push_back(word);
        }
    }
    reverse(words[0].begin(), words[0].end());

    if(words[0] == words[1]) {
        cout << "yes";
        return;
    }
    cout << "no";
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

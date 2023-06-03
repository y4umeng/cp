#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <string>
using namespace std;
#define ll long long
#define mod 1000000007

int diff(string a, string b, int len) {
    int s = 0;
    for (int i = 0; i < len; i++) {
        s += abs(a[i] - b[i]);
    }
    return s;
}
void solve(int num, int len)
{
    vector<string> words;
    string s;
    for(int i = 0; i< num; i++) {
        cin >> s;
        words.push_back(s);
    }
    int mn = 1000; 
    for(int i = 0; i < num; i++) {
        for (int j = i+1; j<num; j++) {
            int d = diff(words[i], words[j], len);
            if (d < mn) {
                mn = d;
            }
        }
    }
    cout << mn;
    return;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int test, n, l;
    cin>>test;
    while(test--)
    {
        cin >> n;
        cin >> l;
        solve(n ,l);
        cout << endl;
    }
    return 0;
}

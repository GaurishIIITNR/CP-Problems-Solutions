// Created by Mohit Kulhari
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int ans = 0;
        map<int, int> m;
        while (n--)
        {
            int x;
            cin >> x;
            m[x]++;
        }
        for (auto x : m)
            ans = max(x.first + (x.second - 1), ans);
        cout << ans << "\n";
    }
}
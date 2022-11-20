// HHM
#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll tests;
    cin >> tests;
    while (tests--)
    {
        ll n;
        cin >> n;
        map<char, bool> mp;
        string s;
        cin >> s;
        ll cnt = 0;

        for (auto x : s)
        {
            if (mp[x] == 0)
                cnt += 2;
            else
                cnt++;
            mp[x] = 1;
        }
        cout << cnt << "\n";
    }
}
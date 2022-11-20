// Created by LALU PRASAD YADAV
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
        ll a;
        cin >> a;
        string s;
        cin >> s;
        ll cnt = 0;
        ll flag = 0;
        for (ll i = 0; i < a - 1; i++)
        {
            if (s[i] == s[i + 1] && flag == 0)
            {
                cnt++;
                flag = 1;
                continue;
            }
            else if (flag == 1)
            {
                flag = 0;
                continue;
            }
            else
                cnt++;
        }
        ll cn = 0;
        for (ll i = a - 1; i >= 0; i--)
        {
            if (s[i] == s[a - 1])
                cn++;
            else
                break;
        }
        if (cn % 2)
            cout << cnt + 1 << "\n";
        else
            cout << cnt << "\n";
    }
}
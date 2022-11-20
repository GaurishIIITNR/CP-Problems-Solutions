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
        string s;
        cin >> s;
        bool flag = 1;
        ll l = s.length();
        if ((int)(s[s.length() - 1] - '0') % 2)
        {
            for (int i = 0; i < s.length() - 1; i++)
            {
                if ((int)(s[i] - '0') % 2)
                {
                    cout << "YES\n";
                    flag = 0;
                    break;
                }
            }
        }
        if ((int)(s[s.length() - 1] - '0') % 2 == 0)
        {
            for (int i = 0; i < s.length() - 1; i++)
            {
                if ((int)(s[i] - '0') % 2 == 0)
                {
                    cout << "YES\n";
                    flag = 0;
                    break;
                }
            }
        }
        if (flag)
            cout << "NO\n";
    }
}
// Created by Mahadev_devote
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
        ll a, b;
        cin >> a >> b;
        string s1 = "", s2 = "";
        if ((a % 2 && b % 2) || (a == 1 || b == 1))
            cout << -1 << "\n";
        else
        {
            if (a % 2 == 0 && b % 2 == 0)
            {
                for (ll i = 0; i < a; i += 2)
                    s1 = 'a' + s1 + 'a';
                for (ll i = 0; i < b; i += 2)
                    s1 = 'b' + s1 + 'b';
                for (ll i = 0; i < b; i += 2)
                    s2 = 'b' + s2 + 'b';
                for (ll i = 0; i < a; i += 2)
                    s2 = 'a' + s2 + 'a';
            }
            else if (a % 2)
            {
                s1 = 'a';
                s2 = 'a';
                for (ll i = 0; i < a - 1; i += 2)
                    s1 = 'a' + s1 + 'a';
                for (ll i = 0; i < b; i += 2)
                    s1 = 'b' + s1 + 'b';
                for (ll i = 0; i < b; i += 2)
                    s2 = 'b' + s2 + 'b';
                for (ll i = 0; i < a - 1; i += 2)
                    s2 = 'a' + s2 + 'a';
            }
            else if (b % 2)
            {
                s1 = 'b';
                s2 = 'b';
                for (ll i = 0; i < a; i += 2)
                    s1 = 'a' + s1 + 'a';
                for (ll i = 0; i < b - 1; i += 2)
                    s1 = 'b' + s1 + 'b';
                for (ll i = 0; i < b - 1; i += 2)
                    s2 = 'b' + s2 + 'b';
                for (ll i = 0; i < a; i += 2)
                    s2 = 'a' + s2 + 'a';
            }
        }

        cout << s1 << "\n"
             << s2 << "\n";
    }
}

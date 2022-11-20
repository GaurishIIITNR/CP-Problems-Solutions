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
        ll n;
        cin >> n;
        ll mx = INT_MIN, indmx;
        ll mn = INT_MAX, indmin;
        ll sm = 0;
        for (int i = 0; i < n; i++)
        {
            ll d;
            cin >> d;
            d = abs(d);
            if (i % 2)
            {
                if (mx < d)
                    mx = d;
                sm -= d;
            }
            else
            {
                if (mn > d)
                    mn = d;
                sm += d;
            }
        }
        if (mx > mn)
            cout << (sm + (2 * mx) - (2 * mn)) << "\n";
        else
            cout << sm << "\n";
    }
}
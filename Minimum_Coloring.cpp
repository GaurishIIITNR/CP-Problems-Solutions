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
        ll n, m, x1, y1, x2, y2;
        cin >> n >> m >> x1 >> y1 >> x2 >> y2;
        ll v[n][m];
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                if (i == x1 - 1 && j == y1 - 1)
                    v[i][j] = 1;
                else if (i == x2 - 1 && j == y2 - 1)
                    v[i][j] = 2;
                else
                    v[i][j] = 0;
            }
            cout << "\n";
        }
    }
}
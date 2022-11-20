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
        map<int, vector<ll>> m;
        vector<ll> v(33, 0);
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            if (z == 0)
            {
                v[0]++;
                v[31]++;
            }
            else if (z == 1)
            {
                v[0]++;
                v[32]++;
            }
            else
                v[floor(log2(z))]++;
            m[i] = v;
        }
        int q;
        cin >> q;
        while (q--)
        {
            int l, r, x;
            cin >> l >> r >> x;
            if (x == 0)
            {
                if (l - 2 < 0)
                    cout << (r - l + 1) - (m[r - 1][31]) << "\n";
                else
                    cout << (r - l + 1) - (m[r - 1][31] - m[l - 2][31]) << "\n";
            }
            else if (x == 1)
            {
                if (l - 2 < 0)
                    cout << (r - l + 1) - (m[r - 1][32]) << "\n";
                else
                    cout << (r - l + 1) - (m[r - 1][32] - m[l - 2][32]) << "\n";
            }
            else if (l - 2 < 0)
                cout << (r - l + 1) - (m[r - 1][floor(log2(x))]) << "\n";
            else
                cout << (r - l + 1) - (m[r - 1][floor(log2(x))] - m[l - 2][floor(log2(x))]) << "\n";
        }
    }
}
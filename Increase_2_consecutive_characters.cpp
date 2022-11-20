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
        ll l, q;
        cin >> l >> q;
        string s1, s2;
        cin >> s1 >> s2;
        while (q--)
        {
            ll j, k;
            cin >> j >> k;
            if (j > k)
                swap(j, k);
            ll flag = 1;
            ll sm1 = 0, sm2 = 0;
            for (ll i = j; i < k; i++)
            {

                ll d1 = ((s1[i] - 'a') % 27 - (s1[i - 1] - 'a') % 27), d2 = ((s2[i] - 'a') % 27 - (s2[i - 1] - 'a') % 27);

                if (d1 < 0)
                    d1 = d1 + 26;
                if (d2 < 0)
                    d2 = d2 + 26;
                // cout << d1 << " " << d2 << "\n";
                sm1 += d1;
                sm2 += d2;
            }
            if (sm1 != sm2)
                cout << "No\n";
            else
                cout << "Yes\n";
        }
    }
}
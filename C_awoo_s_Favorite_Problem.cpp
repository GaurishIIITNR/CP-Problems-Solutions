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
        ll a;
        string b, c;
        cin >> a >> b >> c;
        if (a == 1 && c != b)
        {
            cout << "NO\n";
            continue;
        }

        for (ll i = 0; i < a - 1; i++)
        {
            if (b[i] != c[i])
            {
                if (b[i] == 'c' || c[i] == 'a' || c[i] != b[i + 1])
                    continue;
                else
                    swap(b[i], b[i + 1]);
            }
        }
        bool f = 1;
        // cout << b << " " << c << "\n";
        ll c1 = 0, c2 = 0, c3 = 0, c4 = 0;
        for (ll i = 0; i < a; i++)
        {
            if (b[i] != c[i])
            {
                if ((b[i] == 'a' && c[i] == 'b'))
                    c1++;
                else if (b[i] == 'b' && c[i] == 'c')
                    c2++;
                else if (b[i] == 'b' && c[i] == 'a' && c1 > 0)
                    c3++;
                else if (b[i] == 'c' && c[i] == 'b' && c2 > 0)
                    c4++;
                else
                {
                    f = 0;
                    break;
                }
            }
        }
        if (f && c2 == c4 && c1 == c3)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
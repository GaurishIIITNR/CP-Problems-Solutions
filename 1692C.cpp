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
        ll ro, co;
        bool f = 0, flag = 1;
        char arr[8][8];
        for (ll i = 0; i < 8; i++)
        {
            ll cnt = 0;
            ll k1 = 0, k2 = 0;
            for (ll j = 0; j < 8; j++)
            {
                char ce;
                cin >> ce;
                arr[i][j] = ce;
                if (ce == '#')
                {
                    cnt++;
                    if (cnt == 1)
                        k1 = j;
                    else
                        k2 = j;
                }
            }
            if (cnt == 2 && flag)
            {
                co = (k1 + k2 + 2) / 2;
                // flag=0;
            }
        }
        for (ll j = 0; j < 8; j++)
        {
            ll cnt = 0;
            ll k1 = 0, k2 = 0;
            for (ll i = 0; i < 8; i++)
            {
                if (arr[i][j] == '#')
                {
                    cnt++;
                    if (cnt == 1)
                        k1 = i;
                    else
                        k2 = i;
                }
            }
            if (cnt == 2)
            {
                ro = (k1 + k2 + 2) / 2;
                break;
            }
        }
        cout << ro << " " << co << "\n";
    }
}
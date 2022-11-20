#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    // cin >> t;

    while (t--)
    {
        ll a;
        cin >> a;
        ll b[a];
        for (int i = 0; i < a; i++)
            cin >> b[i];
        if (a % 2 == 0)
        {
            for (int i = 0; i < (a) / 2; i++)
            {
                cout << b[i] << " " << b[a - i - 1] << " ";
            }
        }
        else
        {
            for (int i = 0; i < (a - 1) / 2; i++)
                cout << b[i] << " " << b[a - i - 1] << " ";
            cout << b[(a - 1) / 2];
        }
    }
}

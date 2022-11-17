#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    cin >> t;

    while (t--)
    {
        ll a;
        cin >> a;
        if (a % 7 == 0)
            cout << a << "\n";
        else
        {
            for (ll i = 0; i <= 9; i++)
            {
              ll d=((a/10)*10)+i;
                if (d % 7 == 0)
                {
                    cout << d << "\n";
                    break;
                }
            }
        }
    }
}
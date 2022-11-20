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
        ll a, b;
        cin >> a >> b;

        if (a >= b)
            cout << b << "\n";
        else if (b > (a + 1) * a / 2)
            cout << -1 << "\n";
        else if (a < b)
        {

            for (ll i = 1; i <= a; i++)
            {
                if (b == (i * (i + 1) / 2))
                {  
                    for (ll j = 1; j <= i; j++)
                        cout << j << " ";
                    break;
                }
                else if (b < (i * (i + 1) / 2))
                { 
                    for (ll j = 1; j <= i; j++)
                    {
                        if (j != (((i + 1) * i / 2) - b))
                            cout << j << " ";
                    }
                    break;
                }
               

            }
          cout << "\n";  
        }
    }
}

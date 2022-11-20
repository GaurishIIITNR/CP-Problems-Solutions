#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    cin >> t;
    ll police = 0;
    ll untreated = 0;
    while (t--)
    {
        ll a;
        cin >> a;

        if (a < 0)
        {
            if (police == 0)
                untreated += 1;
            else if (police > 0)
                police--;
        }
        else
            police += a;
    }
    cout << untreated << "\n";
}

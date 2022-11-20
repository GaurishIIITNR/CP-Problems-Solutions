#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    // cin>>t;

    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        for (ll i = 1; true; i++)
        {
            if ((a * pow(3, i)) > b * pow(2, i))
            {
                cout << i << "\n";
                break;
            }
        }
    }
}

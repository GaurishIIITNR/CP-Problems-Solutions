#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void p(ll n)
{
    ll flag = 1;
    if (n == 2)
        cout << "YES\n";
    else if (n == 1)
        cout << "NO\n";
    else

    {
        for (ll i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                cout << "NO\n";
                flag = 2;
                break;
            }
        }
        if (flag == 1)
            cout << "YES\n";
    }
}
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
        p(a);
    }
}

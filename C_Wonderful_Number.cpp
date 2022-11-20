#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void bi(ll n)
{
    if (n % 2 == 0)
        cout << "NO\n";
    else
    {
        vector<ll> v;
        for (int i = n; i > 0; i /= 2)
        {
            v.push_back(i % 2);
        }
        ll flag = 1;
        for (ll i = 0; i < v.size(); i++)
        {
            if (v[i] != v[v.size() - 1 - i])
            {
                flag = 2;
                cout << "NO\n";
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
   // cin >> t;

    while (t--)
    {
      ll a;
      cin >> a;
      bi(a);
    }
}

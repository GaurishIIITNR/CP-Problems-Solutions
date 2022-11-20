#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll evena(ll a, ll b)
{
    if (a % 2 == 0)
        return {a,b};
    else
        return b;
}

ll sumv(ll n, ll a, ll d)
{

    ll sum = (n * (2 * a + (n - 1) * d)) / 2;

    return sum;
}



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
        if (a > b)
            swap(a, b);
        ll total = sumv(b - a + 1, a, 1);
        a = evena(a, a + 1);
        b = evena(b, b - 1);
        ll even = sumv((b - a) / 2 + 1, a, 2);
        ll odd = total - even;
        cout << total << "\n"
             << even << "\n"
             << odd << "\n";
    }
}

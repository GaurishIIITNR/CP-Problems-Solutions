// HHM
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll f(ll n)
{
    if (n < 0)
        return 1;
    ll mn = 0;
    ll n1 = n;
    while (n1 > 0)
    {
        mn = max(mn, (n1 % 10));
        n1 /= 10;
    }
    ll p = f(n - mn);
    return p;
}
int main()
{
    ll n;
    cin >> n;
    cout << f(n);
}
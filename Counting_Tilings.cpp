#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod = 1000000007;
ll c = 0;
ll f(ll n, ll m)
{
    if (n == 0 && m == 0)
        return 1;
    if (n < 0 || m < 0)
        return 0;
    // ll p = f(n - 1, m - 2) + f(n - 2, m - 1);
    // cout << n << " " << m << "\n";
    return p;
}
int main()
{
    ll n, m;
    cin >> n >> m;
    cout << f(n * m, m * n);
    // cout << c << "\n";
}
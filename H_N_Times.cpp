#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void p(ll n, char m)
{
    for (int i = 1; i <= n; i = i + 1)
    {
        cout << m;
        if (i != n)
            cout << " ";
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
        char b;
        cin >> a >> b;
        p(a, b);
        cout<<"\n";
    }
}

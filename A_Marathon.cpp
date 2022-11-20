// HHM
#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll tests;
    cin >> tests;
    while (tests--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll cn = 0;
        if (a < b)
            cn++;
        if (a < c)
            cn++;
        if (a < d)
            cn++;
        cout << cn << "\n";
    }
}
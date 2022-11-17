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
        ll a, b;
        cin >> a >> b;
        string s = "";
        ll n=a+b;
        for (ll i = 0; i < n; i++)
        {
            if (i % 2 == 0 && b > 0)
            {
                s += '1';
                b--;
            }
            else if (a > 0)
            {
                s += '0';
                a--;
            }
            else
            {
                s += '1';
                b--;
            }
        }
        cout << s << "\n";
    }
}
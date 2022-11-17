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
        ll a;
        cin >> a;
        vector<ll> v;
        ll mn = INT_MAX, mni;
        for (int i = 0; i < a; i++)
        {
            ll d;
            cin >> d;
            v.push_back(d);
            if (d < mn)
            {
                mn = d;
                mni = i;
            }
        }
        if (a % 2)
        {
            cout << "Mike\n";
            continue;
        }
        if (mni % 2 == 0)
        {
            cout << "Joe\n";
            continue;
        }
        cout << "Mike\n";
    }
}
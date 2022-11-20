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
        (a <= b) ? cout << 0 << "\n" : cout << a - b << "\n";
    }
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll tests;
    cin >> tests;
    while (tests--)
    {
        long long int a, b;
        cin >> a >> b;
        cout << ((a - 1) * b) + ((b - a) * (a - 1)) << "\n";
    }
}
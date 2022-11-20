#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll tests;
    cin >> tests;
    while (tests--)
    {
     int x,y;cin >> x>> y;if ((y-x) % 3 == 1||(y-x) % 3 == 0) cout << "YES\n";else cout << "NO\n";
    }
}
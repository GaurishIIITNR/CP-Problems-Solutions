
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    //cin >> t;

    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        cout << (a - (b / 2));
    }
}

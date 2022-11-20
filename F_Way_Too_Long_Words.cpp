#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    cin >> t;

    while (t--)
    {
        string a;
        cin >> a;
        ll l = a.length();
        if (l <= 10)
            cout << a << "\n";
        else
            cout << a[0] << l - 2 << a[l - 1] << "\n";
    }
}

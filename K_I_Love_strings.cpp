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
        string a, b;
        cin >> a >> b;
        ll l1 = a.length();
        ll l2 = b.length();
        ll mn;
        if (l1 <= l2)
            mn = l1;
        else
            mn = l2;
        for (int i = 0; i < mn; i++)
        {

            cout << a[i] << b[i];
        }
        if (l1 < l2)
        {
            cout << b.substr(mn, l2 - mn);
        }
        else
            cout << a.substr(mn, l1 - mn);

        cout << "\n";
    }
}

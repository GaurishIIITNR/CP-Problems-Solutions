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
        ll a, b;
        cin >> a >> b;
        if (a * (a + 1) / 2 == b)
        {
            for (int i = 1; i <= a; i++)
                cout << i << " ";
        }
        cout << "\n";
    }
}

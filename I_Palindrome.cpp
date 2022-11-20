#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
   // cin >> t;

    while (t--)
    {
        string a;
        cin >> a;
        int flag = 1;
        for (ll i = 0; i < a.length(); i++)
        {
            if (a[i] != a[(a.length()) - i - 1])
            {
                flag = 2;
                cout << "NO\n";
                break;
            }
        }
        if (flag == 1)
            cout << "YES\n";
    }
}

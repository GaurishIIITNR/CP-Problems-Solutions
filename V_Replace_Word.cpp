#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    // cin>>t;

    while (t--)
    {
        string a;
        cin >> a;
        // ll l=a.length();
        ll cnt = 0;
        if(a.length() >= 5)
        {
            for (ll i = 0; i < a.length() - 4; i++)
            {
                if (a.substr(i, 5) == "EGYPT")
                    cnt++;
            }
        }
        if (cnt > 0)
        {
            while (cnt--)
            {
                a.replace(a.find("EGYPT"), 5, " ");
            }
        }
        cout << a << endl;
    }
}

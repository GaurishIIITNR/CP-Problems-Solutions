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
        ll a, b;
        cin >> a >> b;
        string s;
        cin >> s;
        ll l = s.length();
        ll cnt = 0;
        for (int i = 0; i < l; i++)
        {
            if (s[i] == '-')
            {
                cnt += 1;
                if (cnt > 1)
                {
                    cout << "No\n";
                    return 0;
                }
            }
        }
        if (l == (a + b + 1))
        {
            if (int(s[a]) >= int('0') && int(s[a]) <= int('9'))
                cout << "No\n";
            else
                cout << "Yes\n";
        }

        else
            cout << "No\n";
    }
}

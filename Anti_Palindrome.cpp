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
        ll a;
        string s;
        cin >> a >> s;
        vector<ll> v(26, 0);
        sort(s.begin(), s.end());
        for (ll i = 0; i < a; i++)
            v[s[i] - 'a']++;
        ll maxx = *max_element(v.begin(), v.end());
        if (a % 2 != 0)
            cout << "N0\n";
        else if (maxx > (a / 2))
            cout
                << "N0\n";
        else
        {
            cout << "YES\n";

            while (1)
            {
                bool flag = false;
                for (int i = 0; i < 26; i++)
                {
                    if (v[i] > 0)
                    {
                        cout << char(i + 'a');
                        v[i]--;
                        flag = true;
                    }
                }
                if (!flag)
                {
                    cout << "\n";
                    break;
                }
            }
        }
    }
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        bool flag = 0;
        for (ll i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == '0')
                continue;
            else if (s[i] != s[i + 1])
            {
                flag = 1;
                break;
            }
            else
                s[i + 1] = '0';
            if (flag)
                break;
        }
        if (flag||s[n-1]=='1')
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}
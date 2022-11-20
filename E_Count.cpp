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
        string str;
        cin >> str;
        ll l = str.length();
        ll sm = 0;
        for (ll i = 0; i < l; i++)

        {
            sm += int(str[i] - '0');
        }
        cout << sm;
    }
}

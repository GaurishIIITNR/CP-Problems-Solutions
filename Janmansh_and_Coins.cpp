#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll tc;
    cin >> tc;

    while (tc--)
    {
        ll a, b;
        cin >> a >> b;
        ll f = 2;
        ll i = 1;
        while (i < a+1)
        {
            if (b % i == 0 && (i + (b / i)) < a + 1)
                f = 1;
            i++;
        }
        if (f == 2)
            cout << "NO\n";
        else
         cout<<"YES\n";
    }
}

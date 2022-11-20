#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    cin >> t;
   vector<int>r{0};
   r.push_back(5);
   cout<<"sss"<<r.size()<<endl;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (a == 1 && b == 1)
            cout << "YES\n"
                 << 1 << "\n";
        else if (a % 2 != 0 && b == 1)
        {
            cout << "YES\n";
            for (int i = 1; i <= a; i++)
                cout << i << "\n";
        }
        else if (a % 2)
            cout
                << "NO\n";
        else
        {
            cout << "YES\n";
            for (ll i = 1; i <= a; i++)
            {
                ll x = i;
                for (ll j = 1; j <= b; j++)
                {
                    cout << x << " ";
                    x += a;
                }
                cout << "\n";
            }
        }
    }
}

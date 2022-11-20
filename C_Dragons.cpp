/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 13-02-2022**** //
                            // ******TIME:10:17:22****** //
========================================================================================
*/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
struct dragon
{
    ll strength, bonus;
};


bool comp(dragon a , dragon b) {
     if(a.strength==b.strength)
      return a.bonus>b.bonus;
     return a.strength<b.strength;

}
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
        vector<dragon> v(b); // generic
        struct dragon d;
        for (int i = 0; i < b; i++)
        {
            ll c, f;
            cin >> c >> f;
            d.strength = c;
            d.bonus = f;
            v[i]=d;
        }
        sort(v.begin(), v.end(),comp);
        bool flag = 1;
        for (int i = 0; i < b; i++)
        {
            if (v[i].strength < a)
                a += v[i].bonus;
            else
            {
                flag = 0;
                cout << "NO\n";
                break;
            }
        }
        if (flag)
        cout << "YES\n";
    }
}

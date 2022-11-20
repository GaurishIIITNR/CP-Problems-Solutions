
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    cin >> t;
    vector<ll> v(t);
    ll p1 = 0, p2 = 0;
    for(ll i = 0; i < t;i++)
    {
        ll a;
        cin >> a;
        v[i]=a;
    }
    ll i = 0, j = v.size() - 1, cnt = 1;
    while (cnt <= v.size())
    {
        if (cnt % 2)
        {
            if (v[i] >= v[j])
            {
                p1 += v[i];
                i++;
            }
            else
            {
                p1 += v[j];
                j--;
            }
            // cout << p1 << endl;
        }
        else
        {
            if (v[i] >= v[j])
            {
                p2 += v[i];
                i++;
            }
            else
            {
                p2 += v[j];
                j--;
            }
            //  cout << p2<< endl;
        }
        cnt++;
    }
   cout<<p1<<" "<<p2;
}

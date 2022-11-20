
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    cin >> t;

    while (t--)
    {
        ll a;
        cin >> a;
        ll arr[a];
        ll sm = 0;
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
            sm += arr[i];
        }
        ll res = sm, d=sm;
        for (int i = 0; i < a; i++)
        {  d-=arr[i];
            ll temp=max(d,sm-d);
             res=min(temp,res);
        }
        // cout<<smm<<" "<<sm<<"\n";
        cout <<res<< "\n";
    }
}

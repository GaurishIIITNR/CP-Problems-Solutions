#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll a;
        cin >> a;
        ll cnt=0;
        for (int i = 0; i < a; i++)
        {
            ll b;
            cin >> b;
            if(b==0)
            cnt++;
        }
       ll res;
        res = max(cnt, a - cnt);
        printf("%d\n",res);
    }
}

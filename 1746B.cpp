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
        vector<ll> r(n, 0);
        ll onn = 0, zz = 0, final = 0;
        for (ll i = 0; i < n; i++){
            cin >> r[i];
            if (r[i] == 1)
                onn++;
            else
                zz++;
        }
        for (ll i = 0; i < n; i++){
            if (r[i] == 0){
                zz--;
                if(zz==0)break;
            }
            else{ r[i]=0;onn--;
                for(ll j=n-1;j>i;j--){
                    if(r[j]==0){
                        final++;
                        zz--;
                        r[j]=1;
                        onn--;
                        if(zz==0||onn==0)break;
                    }
                }
            }
            if (zz == 0||onn==0)
                break;
        }
        cout << final << "\n";
    }
}

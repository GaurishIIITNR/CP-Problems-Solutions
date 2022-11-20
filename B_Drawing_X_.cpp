#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void tp(ll a, ll b)
{
    if (a >= b)
        cout << a - b;
    else
        cout << 0;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    // cin>>t;

    while (t--)
    {
        ll a;
        cin >> a;
        ll l=1,k=a;
for (ll i = 1; i <= a/2; i++)
        {
            for (ll j = 1; j < l ; j+=1)
              cout << '*';
            for (ll j = 1; j < 2; j++)
                cout << (char)92;
            for (ll j = 1; j <k-1; j++)
                cout << '*';
            for (ll j = 1; j <2; j++)
                cout << '/';        
            for (ll j = 1; j < l ; j+=1)
                cout << '*';
            cout << "\n";
            l=l+1;
            k=k-2;
        }
       for (ll i = 1; i <= a/2; i++)
       cout << '*';
       cout << 'X';
       for (ll i = 1; i <= a/2; i++)
       cout << '*';
       cout << "\n";
        l=(a/2);
        k=1;
       for (ll i = 1; i <= a/2; i++)
         {
            for (ll j = 1; j < l ; j+=1)
              cout << '*';
            for (ll j = 1; j < 2; j++)
               cout << "/";
            for (ll j = 1; j <k+1; j++)
                cout << '*';
            for (ll j = 1; j <2; j++)
                cout << (char)92;        
            for (ll j = 1; j < l ; j+=1)
                cout << '*';
            cout << "\n";
            l=l-1;
            k=k+2;
        }


       

    }
}

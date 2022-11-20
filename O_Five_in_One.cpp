#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void fun()
{
    ll a;
    cin >> a;
    ll mn = INT_MAX;
    ll mx = INT_MIN, mxd = INT_MIN;
    ll maxv=0;
    ll cntp = 0, cnp = 0;
    for (ll i = 0; i < a; i++)
    {
        ll b;
        cin >> b;
        if (mx < b)
            mx = b;
        if (mn > b)
            mn = b;
        ll flag = 1;
        for (ll j = 2; j <= sqrt(b); j++)
        {
            if (b % j == 0)
            {
                flag = 2;
                break;
            }
        }
        if (flag == 1 && b!=1 )
            cntp += 1;
        flag = 1;
        string c = to_string(b);
        for (ll j = 0; j < c.size(); j++)
        {
            if (c[j] != c[(c.size()) - j - 1])
            {
                flag = 2;
                break;
            }
        }
        if (flag == 1)
            cnp += 1;
        ll cnnt = 0;
        
        for (ll j = 1; j < b; j++)
        {
            if (b % j == 0)
                cnnt += 1;
        }
        if (cnnt > mxd)
        {   mxd=cnnt; 
            maxv=b; 
        }
        else if(cnnt==mxd)
        {
            if(maxv<b)
            maxv=b;
        }
    }
    cout<<"The maximum number : "<<mx<<"\n";
    cout<<"The minimum number : "<<mn<<"\n";
    cout<<"The number of prime numbers : "<<cntp<<"\n";
    cout<<"The number of palindrome numbers : "<<cnp<<"\n"; 
    cout<<"The number that has the maximum number of divisors : "<<maxv<<"\n";  
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    //cin >> t;

    while (t--)
    {
        fun();
    }
}

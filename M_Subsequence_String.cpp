#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    //cin >> t;

    while (t--)
    {
        string a;
        cin >> a;
        string b = "hello";
        ll flagg=1;
        for (int i = 0; i < b.length(); i++)
        {   ll flag=1;
            for (int j = 0; j < a.length(); j++)
            {
                if(b[i]==a[j])
                {
                    flag=2;
                    a[j]='1';
                    break;
                }
                a[j]='1';
               
            }
           
                if(flag==1)
               {flagg=2;
                    cout<<"NO\n";
                break;}
        }
        if(flagg==1)
        cout<<"YES\n";
    }
}

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    //cin>>t;

    while(t--) 
    {
       string s;
       cin>>s;
       ll flag=1;
       for(ll i=0;i<s.length();i++)
       {
           if(s[i]!='4' || s[i]!='7')
           {
               flag=2;
               break;
           }
       }
       if(flag==1)
       cout<<"YES";
       else
       {
           ll a=stoi(s);
           if(a%4==0||a%7==0||a%44==0||a%47==0||a%77==0||a%444==0||a%447==0||a%474==0||a%477==0||a%777==0)
            cout<<"YES";
            else
             cout<<"NO";
       }

    }
}

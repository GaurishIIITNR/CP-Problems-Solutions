#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int sm(int a,int b)
{
return a+b;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    //cin>>t;

    while(t--) 
    {
   int a,b;
   cin>>a>> b;
   cout<<sm(a,b);
    }
}

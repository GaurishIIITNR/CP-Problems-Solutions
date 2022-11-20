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
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        double e=(double)sqrt(pow((a-c),2)+pow((b-d),2));
        printf("%.11f",e);
    }
}

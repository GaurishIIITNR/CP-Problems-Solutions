#include <bits/stdc++.h>
#include <algorithm>
#define ll long long int
using namespace std;

int maxv(vector<int>&v,int i,int j){

int maxv=INT_MIN;

for(int k=i;k<=j;k++)
maxv=max(maxv,v[k]);

return maxv;


}


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
        vector<int> v(a);
        for (int i = 0; i < a; i++)
            cin >> v[i];
        for (int i = 0; i < a; i++)
        {
            for (int j= 0; (i+j)<a; j++)
            {
             ll d= maxv(v,j,j+i);
            cout<<d<<" ";
            }
        }
        cout<<"\n";
    }
}

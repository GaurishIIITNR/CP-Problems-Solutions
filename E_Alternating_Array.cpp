#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    // cin>>t;

    while (t--)
    {

        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        /// suppose even  -> +
        //  kinte even  - >
        // aur kitne odd  + >

        int op = 0;

        for (int i = 0; i < n; i++)
        {
            if(i%2==0 && v[i]<0)
            op++;

            if(i%2!=0 && v[i]>0)
            op++;
        }
        /// suppose even  -> -
        //  kinte even  + >
        // aur kitne odd  - >

        int op1 = 0;

        for (int i = 0; i < n; i++)
        {
            if(i%2==0 && v[i]>0)
            op1++;

            if(i%2!=0 && v[i]<0)
            op1++;
        }

  cout<<min(op,op1)<<endl;
    }
}

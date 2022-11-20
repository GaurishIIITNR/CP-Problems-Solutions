/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 16-02-2022**** //
                            // ******TIME:11:31:12****** //
========================================================================================
*/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    // cin>>t;
    vector < string > v;
    char a;
    ll cntr = 0, cntl = 0;
    string s = "";
    while (cin >> a)
    {
        s = s + a;
        if (a == 'R')
            cntr++;
        else
            cntl++;
        if (cntl == cntr)
        {
            v.push_back(s);
            s = "";
        }
    }
    cout<<v.size()<<"\n";
    for (int i=0; i<v.size(); i++)
    cout<<v[i]<<"\n";
}

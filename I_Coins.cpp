/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 19-02-2022**** //
                            // ******TIME:17:19:11****** //
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

    while (t--)
    {
        char a, b, c, d, e, f, g, h, i;
        cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;
        if(b=='<')
        swap(a,c);
        if(e=='<')
        swap(d,f);
        if(h=='<')
        swap(g,i);
    
    }
}

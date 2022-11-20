/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 15-02-2022**** //
                            // ******TIME:11:16:28****** //
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
        ll a, b;
        cin >> a >> b;
        string s;
        cin>>s;

        while (b--)
        { 
            ll c,d;
            string s1; cin>>s1;
            if (s1 == "pop_back")
            {
                s.pop_back();
                a=a-1;
            }
            else if (s1 == "front")
            {
               cout<< s[0]<<"\n";
            }
            else if (s1 == "back")
            {
                cout<<s[a-1]<<"\n";
            }
            else if (s1 == "sort")
            {
                cin >> c >> d;
                if(c>d)
                swap(c,d);
                sort(s.begin() + c-1, s.begin() + d );
                        // cout
                        //     << s << "\n";
            }
           else if (s1 == "reverse")
            {
                cin >> c >> d;
                if(c>d)
                swap(c,d);
                reverse(s.begin() + c-1, s.begin() + d);
                    //      cout
                    //  << s << "\n";
            }
            else if (s1 == "print")
            {
                cin >> c;
                cout << s[c - 1] << "\n";
            }
            else if (s1 == "substr")
            {
                cin >> c >> d;
                if(c>d)
                swap(c,d);
               cout<< s.substr(c - 1, d-c+1)<<"\n";
            }
            else if (s1 == "push_back")
            {
                char p;
                cin >> p;
                s.push_back(p);
                a+=1;
                // cout << s << "\n";
            }
        }
    }
}

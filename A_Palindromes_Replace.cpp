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
        string s;
        cin >> s;
        for (ll i = 0; i < s.length(); i++)
        {
            if (s[i] == '?')
            {
                if (s[(s.length()) - i - 1] == '?')
                {
                    s[i] = 'a';
                    s[(s.length()) - i - 1] = 'a';
                }
                else
                    s[i] = s[(s.length()) - i - 1];
            }
        }
        ll flag=1;
        for (ll i = 0; i < s.length(); i++)
        {
            if(s[i]!=s[(s.length()) - i - 1])
            {
                flag=2;
                break;
            }
        }
        if(flag==1)
        cout << s << "\n";
        else
        cout <<-1<< "\n";
    }
}

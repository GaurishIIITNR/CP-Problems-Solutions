#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll tests;
    cin >> tests;
    while (tests--)
    {
        int n, c = 0;
        cin >> n;
        string x, y;
        cin >> x >> y;
        vector<int> v(26, 0);
        for (int i = 0; i < n; i++)
        {
            if (x[i] != y[i])
                v[y[i] - 'a']++;
        }
        for (auto r : v)
            if (r > 0)
                c++;
        cout << c << "\n";
    }
}
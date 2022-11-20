#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll tests;
    cin >> tests;
    while (tests--)
    {
        int num, low = 1, high;
        cin >> num;
        vector<int> v;
        high = num;
        for (int i = 0; i < num; i++)
        {
            if (i % 2)
            {
                v.push_back(low);
                low++;
            }
            else
            {
                v.push_back(high);
                high--;
            }
        }
        reverse(v.begin(), v.end());
        for (auto r : v)
            cout << r << " ";
        cout << "\n";
    }
}
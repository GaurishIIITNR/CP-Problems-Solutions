// HHM
#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll tests;
    cin >> tests;
    while (tests--)
    {
        int a;
        cin >> a;
        int low = 1, high = a;
        for (int i = 0; i < a; i++)
        {
            if (i % 2)
            {
                cout << low << " ";
                low++;
            }
            else
            {
                cout << high << " ";
                high--;
            }
        }
        cout << "\n";
    }
}
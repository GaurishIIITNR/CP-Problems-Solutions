                                                                                            /*
                                                                                            ========================================================================================
                                                                                                                        // ****हर हर महादेव🙏🙏***** //
                                                                                                                        // ***AUTHOR: GAURISH OJHA** //
                                                                                                                        // *****DATE: 15-02-2022**** //
                                                                                                                        // ******TIME:17:06:25****** //
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
                                                                                                cin >> t;
                                                                                                ll k = 1;
                                                                                                while (t--)
                                                                                                {
                                                                                                    string s;
                                                                                                    cin >> s;
                                                                                                    ll l = s.length();
                                                                                                    if (s[l - 1] == 'y')
                                                                                                        cout << "Case #" << k << ": " << s
                                                                                                            << " is ruled by nobody."
                                                                                                            << "\n";
                                                                                                    else if (s[l - 1] == 'a' || s[l - 1] == 'e' || s[l - 1] == 'i' || s[l - 1] == 'o' || s[l - 1] == 'u' || s[l - 1] == 'A' || s[l - 1] == 'E' || s[l - 1] == 'I' || s[l - 1] == 'O' || s[l - 1] == 'U')
                                                                                                        cout << "Case #" << k << ": " << s
                                                                                                            << " is ruled by Alice."
                                                                                                            << "\n";
                                                                                                    else
                                                                                                        cout << "Case #" << k << ": " << s
                                                                                                            << " is ruled by Bob."
                                                                                                            << "\n";
                                                                                                    k++;
                                                                                                }
                                                                                            }

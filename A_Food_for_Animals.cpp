// DATE: 05-05-2022
// TIME:20:12:04
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dbl double
#define deb(v) cout << #v << " " << v << "\n"
#define foi(i, base, n, k) for (i = base; i < n; i += k)
#define fod(i, base, n, k) for (i = base; i >= n; i -= k)
#define vec(type1, name) vector<type1> name
#define vp(type1, type2, name) vector<pair<type1, type2>> name
#define st(type, name) set<type> name
#define mpp(type1, type2, name) map<type1, type2> name
#define pb push_back
//#define mp make_pair
#define fir first
#define sec second
#define all(x) x.begin(), x.end()
#define part(x, a, b) x.begin() + a, x.begin() + b
#define Pi 3.1415926535897932384626

void gaurish()
{
    ll i, j, k;
    ll a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    if (a >= d && b >= e)
        cout << "YES\n";
    else if (a >= d && b < e && (e - b) <= c)
        cout << "YES\n";
    else if (a < d && b >= e && (d - a) <= c)
        cout << "YES\n";
    else if (a < d && b < e && (e - b) + (d - a) <= c)
        cout << "YES\n";
    else
        cout << "NO\n";

    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    /*#ifndef ONLINE_JUDGE
             freopen("in.txt", "r", stdin);
             freopen("output.txt", "w", stdout);
    #endif*/
    ll t = 1;
    cin >> t;

    while (t--)
    {
        gaurish();
    }
}
/*==================================================================================================================
        PPP55555YYYY555P5PPP55Y5555PPPPPPPPPPPPPGGPPPPPPPPPPPPPPPPPGGGGGGGGGGGBBBBBBBBBBBBBBB##BBBBB###BBBBB
        PPP55Y5Y7~!?Y55?!7?JJJJJJYY55PPPPPPPPPPPGGGGGGGPPPPPPGGGGPPGGGGGGGGGGGGBBBBBBBBBBP?7?5B#BY77YGB#####
        PPP55Y5?~~~~!55!~~~~?JJJJYYY55PPPP5PPPPGGGGGGGGGGGGPGGGGGGGGGGGGGGGGGGBBBBBBBBBBBJ~!~~?BP!!!!7P#####
        PP55YY5?~~~!Y5J!~~~?JJYYJ7?????JJJ?JJJJJJYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY5BBBBBJ~!!?B#P!!!7G######
        PP55555J~~~JYJ?!~~7JJJYY?~~~~~~~~~~~~~~~~~~~!!!7777777!!!!!!!!!!!!!!!!!!!!!7BBBBBY!!!GBBG7!!Y#######
        PP55555Y~~~JJJ?!~~7JYYY5?~~~~~~~!!~~~!!!!!!!!7!!!77!!~~~~~~~!!!!!!!!!!!!!!!?BBBB#5!!7BBBB7!!5#######
        P555555J~~~JJJJ!~~7YYYY5YYYY5555555555PPPPGP77!~~~~7PPPPPPPPPGGGP!!!!!!!?5GGBBBBB5!!7B##B7!!5&######
        YYYYYY5J~~~?JJJ!~~7YYYYYY55555YJJ?77777???JJ7!~^^^~5BBBBGGGGGBBBG!!!!!!!!?B#BBBB#5!!7B##B7!!5#######
        5YY5555J~^~?JJJ!~^!YYYYYYYYJ7!~~~~~~~~~!!!!~~^^^^:!BBBBBGGGGGBBBB7!!!!!!JGBBBBBB#5!!7B###7!!5&####BB
        PP55555J^^^?JJJ!^^!YYYYYYY57~~~~~!7?Y5PPGGPP5YJJ??5BBBBBBBBBBBBB#J~!!!~J#BBBBBBB#5!!7B###7!!5&##BBBB
        PPP5555J~~~?JJJ~^^!YYY555555?!~~!PGGPP55YYYYY5PGGBBBBBBBBBBGGGGP57!!!!~5#BBBBBBB#5!!7B###7!!5&##BBGG
        PPPP555J~~~JYJJ!^^!YYY555555PPJ!!77!~~~~~^^^^^^~!7YPB#BBB57!~~~~~!!!!!!?BBBBBBBB#5!!7B###7!!5##BBGGG
        PP55555J~~~?YYY!~~7YYY55555P5J!~~~~~~~~~~~~~~^^^^^^~7YB#G!~~~~~~!!!!!!!!GBBBBBBB#5!!7B##B7!!5#BBGPPG
        5555555J~~~JYYY!~~75Y55555PJ~^^~~~~~?YPGGGGGGPY!^~~~~~G##J~~~~~~~~~~~~!YBBBBBBBB#5!!7B##B?!!5BBGGPPG
        55555Y5J^^~JYYY!~~75555PPP5~~~~~~~?PGBGGGGGGGBG7^~~~~!B##B?!~~~7JJJJJ5GBBBBBBBBB#5!!7B#BB7!!YBGGGPGG
        55555Y5J^^^JYYY!^^7555PPPPGJ~~~~~!PGGGGGGGGGGY!^~^^^^~P#BBBG5J?!!7J5GBBBBBBBBBBB#5~!!BBBB7!!YGGGGGGG
        5555YY5J^^^J5YY!^^75555PPPGG57~~~~JGGGGGGGGGG5?!^~7JYGBBBBGGGGGG5J7!!7YGBBBBBBBB#5~~!GBBG7!!YGGGGGGG
        5555555J^^^J555!^^7P55PPPPPGGGPJ7!~!J5GGGGGGGBBBPJJB#BBBBBBGGGGGGGGP5?!!JGBBB#BB#5~~!GBGG7!!YBGGGGGG
        5555555J^^^J555!^^7PPPPPPPPPPGGGGP5?7!!!7J5PGBBB##BBBBBBBBBGGGGGPPPGBBGY!!YB###B#5~~!GBGP7!!YBGGGGGG
        5555555J^:^J555!^^7PPPPP55555PPPPGGGBGPY?7!YBBBBBBBBBBBBBBBGGGGPPPGGGGB#BY7Y##BB#5~~!GGGP7!!YBGGGGGG
        5555555?:^^J555~^^7555555555555PPPPGGGBBBBBBBBBBBBBBBBBBBBGGGGGGGGGGGGBBBBBBBBBBB5~~!GBGP7!!YBGGGGGG
        5555555J^^^J555~:^!55555555Y555PPGGGGGBBBBBBBBBBBBBBBBBBBBBGGGGGGGGGBBBBBBBBBBBBB5~~!GGGG7!!YGGGGGGG
        5555555J:::J5YY~::!5YY55J??????JJJJJYYYYYYYYY5555555555555555Y555Y555555555PBBBBB5~~!GGGG!!!YGGGBGGB
        5555555?:::?YYY~::!YYYY57:::::::::::::::::^^::^^^^^^^^^^~~~~~~~~~~~!!!~~~~~7GBBBBY~~!GBGG!!~YBGGGGBB
        5555555?:::?YYY~::!YYYY57:::::::::::::::::::^^^^^^^^^^^^^^~~~~~~~~~~~!~~~~~7GBBBBY^~!GBGG!~~JBGGGGBB
        5555555?:::?YYJ^::~YYYYYJ??JJJJJYYYYY55555PY^:^^^^^!5555P555555PY~~~~~~~75PPGGGGBY^~!GBBG!~~JBGBBBBB
        5555555?..:?YJJ^::~YYYYYY55555YJ??77!!7777??^:::::^YBBB#BBBBBBBBP~^~~~~~~7BBBGGGBY^~!GBBG!~~YBBBBBBB
        55555Y5?...?YJJ^::~YJJYYYY5Y!^::::::........::::::~BBBBBBBBBBGGBG~^^^~~~7PBBBBGGBY~~!GBBG!~~YBBBBBBB
        555YYY5?...?YYJ^::~YJJJYYY5!.:::::^~!?JYYYYYJJ?7!!YBBBBBBBBBBBGBB7^^^^^7B#BBBBBBBY~~!GBBG!~~YBBBBBBB
        55YYYYY?...?YYY^.:~YYYYYYY5Y~:..:YPPGPP55YY5PGB####BBBBBBBBBGGPG5~^^^^^Y##BBBBBBBY~~!GBBB!~~JBBBBBBB
        YYYYJJY7...?YYY^..~YYYYYYY555Y!::!~^:::......::^~?5GB#BBB5!^^^^^::^^^^^7####BBBBBY^~~GBBB!~~JBBBBBBB
        JJJJJJY7...7YJY^..~YYYYYY555Y?~:...................:!YB#G:.:::::::::^^^~B####BBB#Y^^~GBBB!~~YBBBBBBB
        JJJJJJJ7...7YYY^..~YYYYYYY5?^.......^7J55PPPP57:.....:P##!.:::::::::::^?B#BBBBBB#Y^^~GBBG!~^JBBBBBBB
        JJ??JJJ7...7YYY:..~YYYYYYYY:......~5GGGGGBBBB#B~.....:B##G~:...^777!!?P#####BBBB#5^^~GBBG!^^Y#BBBBBB
        ????JJJ7...?YYY:..~5YYYYY55~.....:5GPPPPGGGGG5^.......Y####GY7^::~JPB#########BB#5^^~GBBB!^^J#BBBBBB
        ??????J7...7YYY:..~5YYYYYY557:....7PPPPPGGGGGY^...^!7YB########G57^::!5B####BBBB#5^^~GBBB!^^Y#BBBBBB
        ??????J7...7YYY:..^5YYYYYY5555?~:..^?5PGGGGGGBBGJ~!B######BBB#####BP?^:^JB##BBBB#5^^~B##B~^^Y##BBBBB
        ??????J7...7YYY:..^55YYYY55555PP5J7^:::~7J5GGBB###BBBBB###BBBBBBBB####P!:^YBBBBB#5^^~B##B~^^Y###BBB#
        ??????J7...7YYY:..^55YY5555555555PPGP5J7^:^?GBBBB##BBB######BBBBBBB#####G7^?#####5^^~B##B~^^Y#######
        ??????J7...7YYY:..^55YY5YY555555555PPGGBBGGBBBBB#####BY7~!5###############BB####&5:^^B##B~^^Y&######
        ??????J!...7YYY:..^5YY55555555PP5PPPGGGGGBBB###########5~~~!G###################&5::^#&&#~^^Y&######
        ??????J!...7YYY:..^55555J?JJJJJJJYYYYYYY555PPPPPPPPPPPGGGBGJ~?PPPPPPPPPPGGGGB###&5::^#&&#~^^Y&######
        ??????J!.  7YYY:..^5YY5Y^:...:::...::^^::::...:^:...:^^^^^^:..:^^~~^^~^^::.^G###&5::^#&&#~^^Y&######
        ???????!   !YYY:..^5YY555Y..~GB?..~GP7~^~!~..J#&Y..~#BJ~^^^:..Y&#57~~JG#~.^P&###&5.::B&&#~^:J&######
        ??????J~   ^JYJ....J5YY5Y?..:~~:.:PB5::77!!7JG#&5.:#&~ :JPPPJJ#&! .755Y5^.5&&#&&&J.::5&&B^^:7#######
        7?????~.   .J?:....75555J:..^?J!..5BY:.^!?J7..?&Y..G&B7!PGGJ:^?#B7!Y?~::..J&&&&#J:::.7&G!:::^B&#####
        77??J?.   .^Y~. ...?5Y55P5JYGBP^..YBY:.YGGBY::5B^..5##&B57~~^.?#&&#PY5G7..7&&&&B^..::Y&?:::^!#&####&
        777????!:.!JYJ?~.^J55555PPGGGGGGJ?GBBGY???5GGB&#BYJBBB##&&&&&??&&&&&&&&#GJG&&&&&&5~~P&&&B?^J#&&&##&&
        7777777?J7^~JJY5Y!~Y5555PPPPGGGBBGGGPPGGGPPGBBB##&#BBBB########&&&&&&&#&&&&&&&&&&@&G?P&&&&#YY#&&&&&&
        7777777??JJ??JJJYYYY5555PPGGGGBBGGPPPPPPPPPGGGGBBBBBBBBBBB####&&&&&&&&&&&&&&&&&&&&@@&&&&&&&&&&&&&&&&
======================================================================================================================*/

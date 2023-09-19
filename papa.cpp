#include<bits/stdc++.h>
using namespace std;

#pragma GCC target ("avx2")
#pragma GCC optimization ("03")
#pragma GCC optimization ("unroll-loops")

typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;
typedef unsigned char uc;
typedef string str;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

// #define make_pair mp;
#define vll vector<ll>
#define vb vector<bool>
#define vvll vector<vll>
#define qll queue<ll>
#define pll pair<ll, ll>
#define mll map<ll, ll>
#define sll set<ll>
#define vpll vector<pll>
#define spll set<pll>
#define mpll map<ll, pll>
#define qpll queue<pll>
#define ln '\n'
#define fori(i, n) for(ll i = 0; i < n; i++)
#define forto(i, s, e) for(ll i = s; i <= e; i++)
#define from(v) ((v).begin(), (v).end())
#define vii(a, n) vector<ll> a(n); fori(i, n) cin >> a[i];
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

using pi = pair<int, int>;
using vi = vector<int , int>;
using mi = map<int, int>;
using si = set<int, int>;

const int mod = 1000000007;
const ll MODE = 1e9 + 7;
const ll MOD = 998244353;
const ll inf = 1e9;
const int MX = 2e5 + 5;

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

void solve() {
}

int main() {
    fast_io;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("Error.txt", "w", stderr);
    #endif

    //clock_t start, end;
    //start = clock();

    // sieve();
    ll t;
    cin >> t;

    while (t) {
        solve();
        t--;
    }
    // solve();


    //end = clock();
    //double execution_time = (double)(end - start) / (double)(CLOCKS_PER_SEC);
    //cout << endl <<"Time_Taken: " << execution_time << "seconds";

    return 0;
}
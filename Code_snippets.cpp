//KNOWLEDGE BASE

//TEMPLATE
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>

// using namespace __gnu_pbds;

// #define pb(a) push_back(a);
// #define op(a) pop_back(a);
// #define ft front;
// #define bk back;
// #define first ff;
// #define second ss;
// #define ub upper_bound;
// #define lb lower_bound;
// #define vs vector<str>
// #define vs vector<str>
// #define forij(j, n) for(ll j = 0; j < n; j++)
// #define forijm(j, m) for(ll j = 0; j < m; j++)
// #define foriji(j, i, n) for(ll j = i + 1; j < n; j++)
// #define ford(i, n) for(ll i = n - 1; i >= 0; i--)
// #define forii(i, n) for(int i = 0; i < n; i++)
// #define fordi(i, n) for(int i = n - 1; i >= 0; i--)

// #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
// using namespace __gnu_pbds;
// template <typename T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;



//INFORMATION
// class compare {
//     public:
//         bool operator () (const ll &a, const ll &b) return a > b;
// }
//sort(a.begin, a.end(), greater<ll>());
//sort(a.begin(), a.end(), less<ll>());
//set<ll, compare> s;
//priortiy_queue<ll, vll, compare> pq; // MIN_HEAP;
// auto lambda_function_name = [](parameters)-> return_type {function_definition};
//[&] pass all external variables with reference
//[=] pass all external variables with value
//[a, &b] pass variable a with the value(pass by value) and b(pass by reference)

// map<pair<int, int>, int> mymap;
// mymap.insert(make_pair(make_pair(key1,key2), value));
//access mymap[make_pair(key1, key2)];



// CODE SNIPPETS
//Binary Exponentiation using mod operation 
// ll binaryexpo(ll base, ll x) {
// 	ll ans = 1;
// 	while(x) {
// 		if(x % 2) {
// 			ans = (ans * base) % mod;
// 			x = x - 1;
// 		}
// 		else {
// 			base = (base * base) % mod;
// 			x = x / 2;
// 		}
// 	}
// 	return ans;
// }


// class DisjointSet {
//     vector<int> rank, parent, size;
// public:
//     DisjointSet(int n) {
//         rank.resize(n+1, 0);
//         parent.resize(n+1);
//         size.resize(n+1);
//         for(int i = 0;i<=n;i++) {
//             parent[i] = i;
//             size[i] = 1;
//         }
//     }

//     int findUPar(int node) {
//         if(node == parent[node])
//             return node;
//         return parent[node] = findUPar(parent[node]);
//     }

//     void unionByRank(int u, int v) {
//         int ulp_u = findUPar(u);
//         int ulp_v = findUPar(v);
//         if(ulp_u == ulp_v) return;
//         if(rank[ulp_u] < rank[ulp_v]) {
//             parent[ulp_u] = ulp_v;
//         }
//         else if(rank[ulp_v] < rank[ulp_u]) {
//             parent[ulp_v] = ulp_u;
//         }
//         else {
//             parent[ulp_v] = ulp_u;
//             rank[ulp_u]++;
//         }
//     }

//     void unionBySize(int u, int v) {
//         int ulp_u = findUPar(u);
//         int ulp_v = findUPar(v);
//         if(ulp_u == ulp_v) return;
//         if(size[ulp_u] < size[ulp_v]) {
//             parent[ulp_u] = ulp_v;
//             size[ulp_v] += size[ulp_u];
//         }
//         else {
//             parent[ulp_v] = ulp_u;
//             size[ulp_u] += size[ulp_v];
//         }
//     }
// };

// How to print the map of pairs
// for(auto &it: mp) {
//     auto key_pair = it.first;
//     cout << key_pair.first << " " << key_pair.second << " " << it.second << endl;
// }


//Sieve of Eratosthenes
// vll is_prime(10000001, 1);
// for(ll i = 2; i <= 10000000; i++) {
//     if(is_prime[i] == 1) {
//         for(ll j = i * i; j <= 10000000; j += i)
//             is_prime[j] = 0;
//     }
// }

//SPF
// ll maxi = 1e6;
// vll spf(maxi + 1, 0);
// for(ll i = 2; i <= maxi; i++) spf[i] = i;
// for(ll i = 2; i * i <= maxi; i++) {
// 	if(sieve[i] != i) continue;
// 	for(ll j = i * i; j <= maxi; j += i) {
// 		if(spf[j] == j) spf[j] = i;
// 	}
// }

// bool isPrime(ll n) {
//     if(n <= 1) return false;
//     for(ll i = 2; i * i <= n; i++) {
//         if(n % i == 0) return false;
//     }
//     return true;
// }  

// vll prifac[100001];
// for(ll i = 1; i <= 100000; i++) {
//     for(ll j = i; j <= 100000; j += i) {
//         prifac[j].push_back(i);
//     }
// }







//which are the prime factors comes in n
// ll primeFactors(ll n, sll &s, ll len) {
//     if(n % 2 == 0) {
//         len++;
//         s.insert(2);
//         if(len != s.size())
//             return 0;
//         while (n % 2 == 0)
//             n = n / 2;
//     }


//     for (ll i = 3; i <= sqrt(n); i = i + 2) {
//         if(n % i == 0) {
//             len++;
//             s.insert(i);
//             if(len != s.size())
//                 return 0;
//             while (n % i == 0)
//                 n = n / i;
//         }
//     }

//     if (n > 2) {
//         len++;
//         s.insert(n);
//         if(len != s.size())
//             return 0;
//     }

//     return 1;
// }


// ll primeFactors(ll n, sll &s, ll len) {
//     ll c = 2;
//     ll pre = -1;
//     while(n > 1) {
//         if(n % c == 0) {
//             if(pre != c) {
//                 len++;
//                 s.insert(c);
//                 if(len != s.size()) {
//                     return 0;
//                 }
//             }
//             n /= c;
//             pre = c;
//         }
//         else
//             c++;
//     }
//     return 1;
// }

// ll get_hash(str s) {
//     ll h = 0;
//     for(char c: s) h = (h * 31 + (c - 'a' + 1)) % mod;
//     return h;
// }

// ll power(ll x, ll y) {
//     ll res = 1;
//     x = x % mod;
//     while(y > 0) {
//         if(y & 1)
//             res = (res * x) % mod;
//         y = y >> 1;
//         x = (x * x) % mod;
//     }
//     return res;
// }

// void primeFactors(ll n, vll &v) {
//     while (n % 2 == 0) {
//         v.push_back(2);
//         n = n/2;
//     }

//     for (ll i = 3; i <= sqrt(n); i = i + 2) {
//         while (n % i == 0) {
//             v.push_back(1);
//             n = n/i;
//         }
//     }

//     if (n > 2)
//         v.push_back(n);
// }

// void printDivisors(ll n, mll &mp) {
//     for (int i = 1; i <= sqrt(n); i++) {
//         if (n % i == 0) {
//             if (n / i == i)
//                 mp[i]++;
//             else {
//                 mp[i]++;
//                 mp[n / i]++;
//             }
//         }
//     }
// }

// ll combine(int n, int r) {
//     if(r > n - r) r = n - r;
//     ll ans = 1;
//     ll i;

//     for(i = 1; i <= r; i++) {
//         ans *= n - r + i;
//         ans /= i;
//     }

//     return ans;
// }

// bool balance_str(string expr) {
//     stack<char> temp;
//     for (ll i = 0; i < expr.length(); i++) {
//         if (temp.empty()) temp.push(expr[i]);
//         else if ((temp.top() == '(' && expr[i] == ')') || (temp.top() == '{' && expr[i] == '}') || (temp.top() == '[' && expr[i] == ']')) temp.pop();
//         else temp.push(expr[i]);
//     }
//     if (temp.empty()) return true;
//     return false;
// }

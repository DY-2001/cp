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

// typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds
// #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
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
// How to print the map of pairs
// for(auto &it: mp) { // it always took key as a pair
//     auto key_pair = it.first;
//     cout << key_pair.first << " " << key_pair.second << " " << it.second << endl;
// }
// for(const auto& [key, value]: unordered_map) {
//   cout << key << " -  " << value << endl; 
// }


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

//Combinatorics
// ll fact[1e6 + 4];
// ll modinv[1e6 + 4];
// void precompfact() {
// 	modinv[0] = 1;
// 	fact[0] = 1;
// 	for(ll i = 1; i <= 1e6; i++) {
// 		fact[i] = (fact[i - 1] * i) % mod;
// 		modinv[i] = binaryexpo(fact[i], mod - 2);
// 	}
// }

// ll ncr(ll n, ll r) {
// 	if(n < 0 || r < 0 || r > n) return 0;
// 	return(((fact[n] * modinv[r]) % mod) * modinv[n - r]) % mod;
// }


//full nCr 
// int  factorialNumInverse[N + 1]; 
  
// // array to precompute inverse of 1! to N! 
// int  naturalNumInverse[N + 1]; 
  
// // array to store factorial of first N numbers 
// int  fact[N + 1]; 
  
// // Function to precompute inverse of numbers 
// void InverseofNumber(int  p) 
// { 
//     naturalNumInverse[0] = naturalNumInverse[1] = 1; 
//     for (int i = 2; i <= N; i++) 
//         naturalNumInverse[i] = naturalNumInverse[p % i] * (p - p / i) % p; 
// } 
// // Function to precompute inverse of factorials 
// void InverseofFactorial(int  p) 
// { 
//     factorialNumInverse[0] = factorialNumInverse[1] = 1; 
  
//     // precompute inverse of natural numbers 
//     for (int i = 2; i <= N; i++) 
//         factorialNumInverse[i] = (naturalNumInverse[i] * factorialNumInverse[i - 1]) % p; 
// } 
  
// // Function to calculate factorial of 1 to N 
// void factorial(int  p) 
// { 
//     fact[0] = 1; 
  
//     // precompute factorials 
//     for (int i = 1; i <= N; i++) { 
//         fact[i] = (fact[i - 1] * i) % p; 
//     } 
// } 
  
// // Function to return nCr % p in O(1) time 
// int  Binomial(int  N, int  R, int  p) { 
//     int  ans = ((fact[N] * factorialNumInverse[R]) 
//               % p * factorialNumInverse[N - R]) 
//              % p; 
//     return ans; 
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


//Print the all only unique prime factors of n 
//If you want to store instead of print store in some data Structure
// ll primeFactors(ll n) { 
//     ll c = 2;
//     ll pre = -1;
//     while(n > 1) {
//         if(n % c == 0) {
//             if(pre != c) {
//                 cout << c << endl;
//             }
//             n /= c;
//             pre = c;
//         }
//         else
//             c++;
//     }
//     cout << endl;
//     return 1;
// }

//Find all only unique prime factors of n in optimized way 
//and stored in vector and return it
// vll wheel(ll n) {
//     vll factorization;
//     for (ll d : {2, 3, 5}) {
//         if(n % d == 0)
//             factorization.push_back(d);
//         while(n % d == 0) {
//             n /= d;
//         }
//     }
//     static array<int, 8> increments = {4, 2, 4, 2, 4, 6, 2, 6};
//     ll i = 0;
//     for (ll d = 7; d * d <= n; d += increments[i++]) {
//         if(n % d == 0)
//             factorization.push_back(d);
//         while (n % d == 0) {
//             n /= d;
//         }
//         if (i == 8)
//             i = 0;
//     }
//     if (n > 1)
//         factorization.push_back(n);
//     return factorization;
// }



//Find the all only prime factors of n 
//and they will stored in vector v
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

//Print all divisors of n and store in map
// void printDivisors(ll n, mll &mp) {
//     for(ll i = 1; i <= sqrt(n); i++) {
//         if(n % i == 0) {
//             if (n / i == i)
//                 mp[i]++;
//             else {
//                 mp[i]++;
//                 mp[n / i]++;
//             }
//         }
//     }
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

//Range Minimum Query use for min, max, gcd (if there is not update in array) // Time Complexity - O(N(log(N) + Q))
// int n;
// cin >> n;
// bin_log[1] = 0;
// for(int i = 2; i <= n; i++) {
// 	bin_log[i] = bin_log[i/2]+1;
// }
// for(int i = 0; i < n; i++) {
// 	cin >> a[i];
// 	m[i][0] = a[i];
// }
// // 2) preprocessing, O(N*log(N))
// for(int k = 1; k < LOG; k++) {
// 	for(int i = 0; i + (1 << k) - 1 < n; i++) {
// 		m[i][k] = min(m[i][k-1], m[i+(1<<(k-1))][k-1]);
// 	}
// }
// 3) answer queries
// int q;
// cin >> q;
// for(int i = 0; i < q; i++) {
// 	int L, R;
// 	cin >> L >> R;
// 	cout << query(L, R) << "\n";
// }

// const int MAX_N = 100'005;
// const int LOG = 17;
// int a[MAX_N];
// int m[MAX_N][LOG]; // m[i][j] is minimum among a[i..i+2^j-1]
// int bin_log[MAX_N];

// int query(int L, int R) { // O(1)
// 	int length = R - L + 1;
// 	int k = bin_log[length];
// 	return min(m[L][k], m[R-(1<<k)+1][k]);
// }


//Range Minimum Query use for min, max, gcd (if there is not update in array)  with space optimization
// vector<Query> bucket[1 + lgmax];
// int lg(int number) {
//   return 31 - __builtin_clz(number);
// }
// int rmq[5 + nmax], sol[5 + nmax];

// int n, q;
//   std::cin >> n >> q;
//   for(int i = 1; i <= n; i++)
//     std::cin >> rmq[i];
//   for(int i = 1;i <= q; i++) {
//     int x, y;
//     std::cin >> x >> y;
//     bucket[lg(y - x + 1)].push_back({x, y, i});
//   }
 
//   for(int h = 0; h < lgmax; h++) {
//     for(int i = 0; i < bucket[h].size(); i++) {
//       int x = bucket[h][i].x;
//       int y = bucket[h][i].y;
//       int id = bucket[h][i].id;
//       sol[id] = std::min(rmq[x], rmq[y - (1 << h) + 1]);
//     }
 
//     for(int j = 1;j <= n - (1 << (h + 1)) + 1; j++)
//       rmq[j] = std::min(rmq[j], rmq[j + (1 << h)]);
//   }
 
//   for(int i = 1;i <= q; i++)
//     std::cout << sol[i] << '\n';

//Segment Tree (all associative operations are allowed)
// class SGTree {
// 	vector<int> seg;
// public:
// 	SGTree(int n) {
// 		seg.resize(4 * n + 1);
// 	}

// 	void build(int ind, int low, int high, int arr[]) {
// 		if (low == high) {
// 			seg[ind] = arr[low];
// 			return;
// 		}

// 		int mid = (low + high) / 2;
// 		build(2 * ind + 1, low, mid, arr);
// 		build(2 * ind + 2, mid + 1, high, arr);
// 		seg[ind] = min(seg[2 * ind + 1], seg[2 * ind + 2]);
// 	}

// 	int query(int ind, int low, int high, int l, int r) {
// 		if (r < low || high < l) return INT_MAX;

// 		if (low >= l && high <= r) return seg[ind];

// 		int mid = (low + high) >> 1;
// 		int left = query(2 * ind + 1, low, mid, l, r);
// 		int right = query(2 * ind + 2, mid + 1, high, l, r);
// 		return min(left, right);
// 	}
// 	void update(int ind, int low, int high, int i, int val) {
// 		if (low == high) {
// 			seg[ind] = val;
// 			return;
// 		}

// 		int mid = (low + high) >> 1;
// 		if (i <= mid) update(2 * ind + 1, low, mid, i, val);
// 		else update(2 * ind + 2, mid + 1, high, i, val);
// 		seg[ind] = min(seg[2 * ind + 1], seg[2 * ind + 2]);
// 	}
// };
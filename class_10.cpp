// Prime Numbers
// A prime number is a natural number greater than 1 that is not divisible by any positive integers other than 1 and itself.

// IMPORTANT: every prime number greater than 3 can be expressed in the form of 6k ± 1, where k is a natural number. This is because all integers can be expressed in the form of 6k + i, where i = {0, 1, 2, 3, 4, 5}. The numbers that are not prime are those that are divisible by 2 or 3, which correspond to i = {0, 2, 3, 4}. Thus, only i = {1, 5} can yield prime numbers greater than 3.

// #include <bits/stdc++.h>
// #define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// #define ll long long
// #define vi vector<int>
// #define vc vector<char>
// #define vll vector<long long>
// #define vvi vector<vector<int>>
// #define vvc vector<vector<char>>
// #define vpii vector<pair<int, int>>
// #define umii unordered_map<int, int>
// #define umll unordered_map<long long, long long>
// #define r(i, s, e) for (int i = s; i < e; i++)
// #define r0(i, e, s) for(int i = e; i >= s; i--)
// #define maxInVec(v) *max_element(v.begin(), v.end())
// #define minInVec(v) *min_element(v.begin(), v.end())
// #define maxIdxInVec(v) max_element(v.begin(), v.end()) - v.begin()
// #define minIdxInVec(v) min_element(v.begin(), v.end()) - v.begin()
// #define MOD 100000007
// #define ll_1(n) ll n; cin >> n;
// #define int_1(n) int n; cin >> n;
// #define ll_2(a, b) ll a, b; cin >> a >> b;
// #define vec_ll(v, n) vll v(n); r(i, 0, n) cin >> v[i];
// #define str_1(s) string s; cin >> s;

// using namespace std;

// bool isValidTriangle(ll a, ll b, ll c) 
// {
//     return (a + b > c) && (a + c > b) && (b + c > a);
// }

// bool isPrime(ll n) 
// {
//     if (n <= 1) return false;
//     if (n <= 3) return true;
//     if (n % 2 == 0 || n % 3 == 0) return false;
    
//     for (ll i = 5; i * i <= n; i += 6) 
//     {
//         if (n % i == 0 || n % (i + 2) == 0) return false;
//     }
//     return true;
// }


// void solve() 
// {
//     ll_1(n);
//     if (isPrime(n)) cout << n << " is prime\n";
//     else cout << n << " is not prime\n";
// }

// int main()
// {
//     fast;
//     solve();
//     return 0;
// }


// Time complexity of isPrime function: O(sqrt(n))
// Space complexity of isPrime function: O(1)




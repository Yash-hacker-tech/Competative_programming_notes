// INCLUSION AND EXCLUSION

// A U B = A + B - A ∩ B
// general formula
// n(A U B) = n(A) + n(B) - n(A ∩ B)
// n(A U B U C) = n(A) + n(B) + n(C) - n(A ∩ B) - n(A ∩ C) - n(B ∩ C) + n(A ∩ B ∩ C)

// problem

// Total number divisible by till n prime numbers

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define ll long long
#define vi vector<int>
#define vc vector<char>
#define vll vector<long long>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vpii vector<pair<int, int>>
#define umii unordered_map<int, int>
#define r(i, s, e) for (int i = s; i < e; i++)
#define r0(i, e, s) for(int i = e; i >= s; i--)
#define maxInVec(v) *max_element(v.begin(), v.end())
#define minInVec(v) *min_element(v.begin(), v.end())
#define maxIdxInVec(v) max_element(v.begin(), v.end()) - v.begin()
#define minIdxInVec(v) min_element(v.begin(), v.end()) - v.begin()
#define MOD 100000007

using namespace std;

void solve() 
{
    long long n;
    cin >> n;
    vector<long long> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};

    long long ans = 0;
    int m = primes.size();

    for (int mask = 1; mask < (1 << m); mask++) 
    {
        long long lcm = 1;
        for (int j = 0; j < m; j++) 
        {
            if (mask & (1 << j)) 
            {
                if (lcm > n / primes[j]) 
                { 
                    lcm = n + 1; 
                    break;
                }
                lcm *= primes[j];
            }
        }
        if (lcm > n) continue;

        if (__builtin_popcount(mask) & 1) ans += (n / lcm);
        else ans -= (n / lcm);
    }

    cout << ans << "\n";
}


int main()
{
    fast;
    ll t; cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}

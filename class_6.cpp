// BINARY EXPONENTIATION

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// ll answer(ll a, ll b) 
// {
//     long long result = 1;
//     while (b > 0) 
//     {
//         if (b & 1)
//         {
//             result *= a;
//         }
//         a *= a; 
//         b >>= 1; 
//     }
//     return result;
// }
// int main()
// {
//     fast
//     ll n,m;
//     cin>>n>>m;
//     cout<<answer(n,m)<<endl;
//     return 0;
// }

// Time Complexity: O(log n)
// Space Complexity: O(1)


// BINARY EXPONENTIATION MODULO

// Super Pow
// Your task is to calculate ab mod 1337 where a is a positive integer and b is an extremely large positive integer given in the form of an array.

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define vi vector<int>
// #define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// const int mod = 1337;
// int myPow(int a, int k) 
// {
//     int result = 1;
//     a %= mod;
//     while (k > 0) 
//     {
//         if (k % 2 == 1)
//             result = (result * a) % mod;
//         a = (a * a) % mod;
//         k /= 2;
//     }
//     return result;
// }
// int superPow(int a, vector<int>& b) 
// {
//     int result = 1;
//     for (int i = 0; i < b.size(); ++i) 
//     {
//         result = myPow(result, 10) * myPow(a, b[i]) % mod;
//     }
//     return result;
// }
// int main()
// {
//     fast
//     int a, x;
//     cin>>a;
//     vector<int> b;
//     while(cin>>x) 
//     {
//         b.push_back(x);
//         if (cin.peek() == '\n') break;
//     }
//     cout<<superPow(n,b)<<endl;
//     return 0;
// }

// Time Complexity: O(log n)
// Space Complexity: O(1)


// BINARY MULTIPLICATION

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define mod 1000000007
// #define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// ll binaryMultiplication(ll a, ll b) 
// {
//     a %= mod;
//     b %= mod;
//     ll result = 0;
//     while (b > 0) 
//     {
//         if (b & 1) 
//         {
//             result = (result + a) % mod;
//         }
//         a = (a * 2) % mod;
//         b >>= 1;
//     }
//     return result;
// }

// int main() {
//     fast
//     ll a, b;
//     cin >> a >> b;
//     cout << binaryMultiplication(a, b) << endl;
//     return 0;
// }


// Time Complexity: O(log n)
// Space Complexity: O(1)


// MATRIX EXPONENTIATION


// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define mod 1000000007
// #define N 2
// void multiply(int F[N][N], int M[N][N])
// {
//     int x = F[0][0] * M[0][0] + F[0][1] * M[1][0];
//     int y = F[0][0] * M[0][1] + F[0][1] * M[1][1];
//     int z = F[1][0] * M[0][0] + F[1][1] * M[1][0];
//     int w = F[1][0] * M[0][1] + F[1][1] * M[1][1];
//     F[0][0] = x % mod;
//     F[0][1] = y % mod;
//     F[1][0] = z % mod;
//     F[1][1] = w % mod;
// }
// void power(int F[N][N], int n) 
// {
//     if (n == 0 || n == 1) return;
//     int M[N][N] = {{1, 1}, {1, 0}};
//     power(F, n / 2);
//     multiply(F, F);
//     if (n % 2 != 0) multiply(F, M);
// }
// int fib(int n)
// {
//     if (n == 0) return 0;
//     int F[N][N] = {{1, 1}, {1, 0}};
//     power(F, n - 1);
//     return F[0][0];
// }
// int main()
// {
//     fast
//     int n;
//     cin >> n;
//     cout << fib(n) << endl;
//     return 0;
// }


// Time Complexity: O(log n)
// Space Complexity: O(1) for matrix exponentiation
// Space Complexity: O(1) for recursion stack
// Space Complexity: O(1) for tabulation (if we only keep the last two values)
// Space Complexity: O(1) for memoization (if we only keep the last two values)


// FIBOSUM

#include<bits/stdc++.h>
#define int long long int
using namespace std;
const int mod = 1e9 + 7;
const int sz = 3;
struct Mat 
{
	int m[sz][sz];
	Mat() 
	{
		memset(m, 0, sizeof(m));
	}
	void identity() 
	{
		for (int i = 0; i < sz; i++) 
		{
			m[i][i] = 1;
		}
	}
	Mat operator* (Mat a) 
	{
		Mat res;
		for (int i = 0; i < sz; i++) 
		{
			for (int j = 0; j < sz; j++) 
			{
				for (int k = 0; k < sz; k++) 
				{
					res.m[i][j] += m[i][k] * a.m[k][j];
					res.m[i][j] %= mod;
				}
			}
		}
		return res;
	}
};
int Fibosum(int n) 
{
	if (n == -1) return 0;
	if (n == 0) return 0;
	if (n == 1) return 1;
	Mat res;
	res.identity();
	Mat T;
	T.m[0][0] = T.m[0][1] = T.m[0][2] = 1;
	T.m[1][1] = T.m[1][2] = 1;
	T.m[2][1] = 1;
	n -= 1;
	while (n) 
	{
		if (n & 1) res = res * T;
		T = T * T;
		n /= 2;
	}
	return (res.m[0][0] + res.m[0][1]) % mod;
}	
int32_t main()
{
	int t;
	cin >> t;
	while (t--) 
	{
		int n, m;
		cin >> n >> m;
		cout << (Fibosum(m) - Fibosum(n - 1) + mod) % mod << '\n';
	}
	return 0;
}


// Time Complexity: O(log n)
// Space Complexity: O(1) for matrix exponentiation





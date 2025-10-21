// pigeonhole principle

// Decreasing Sequence
// You are given two integers L and R. Find the smallest non-negative integer N such that
// N%L > N%(L+1) > … > N%(R−1) > N%R.
// Here, % is the modulo operator, so A%B is the remainder of A after division by B. For example, 11%3=2.
// Return the smallest possible N if solution exists otherwise return -1.


// #include <bits/stdc++.h>
// #define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// #define vi vector<int>
// #define vvi vector<vector<int>>
// #define vpii vector<pair<int, int>>
// #define umii unordered_map<int, int>
// #define r(i, s, e) for (auto i = s; i < e; i++)
// using namespace std;
// int solve(int L, int R)
// {
//     r(i, L, R)
//     {
//         if(R%i == 0) return -1;
//     }
//     return R;
// }
// int main() 
// {
//     fast;
//     int L, R;
//     cin >> L >> R;
//     cout << solve(L, R) << endl;
//     return 0;
// }





// gray similar code

// given N 64 bit integer such that any 2 successive integers differ by exactly 1 bit we have to find out 4 integers such that their XOR = 0.

// #include <bits/stdc++.h>
// #define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// #define ll long long
// #define vi vector<int>
// #define vll vector<long long>
// #define vvi vector<vector<int>>
// #define vpii vector<pair<int, int>>
// #define umii unordered_map<int, int>
// #define r(i, s, e) for (ll i = s; i < e; i++)
// using namespace std;
// int main()
// {
//     fast;
//     ll n;
//     cin>>n;
//     vll arr(n);
//     r(i, 0, n) cin >> arr[i];
//     // if n > 130 answer will always be YES because 130/2 = 65 pairs, and in each pair we have number of from 2^n [i.e. only 1 bit is set]
//     // this one bit can occupy index from 0 to 63, that means int worst case at the end all 64 bits are set, so on 65 pairs means 1 bit is repeated
//     // it means there are 4 numbers such that their XOR = 0
//     if(n >= 130)
//     {
//         cout<<"YES\n";
//         return 0;
//     }
//     // n < 130
//     // we need to use bruteforce
//     // we will make 3 loops and look for 4th term
//     // ...
// }





// HOLIDAY

// Nowadays, people have many ways to save money on accommodation when they are on vacation. 
// One of these ways is exchanging houses with other people.
// Here is a group of N people who want to travel around the world. They live in different cities, so they can travel to some other people's city and use someone's house temporary. 
// Now they want to make a plan that choose a destination for each person. There are two rules should be satisfied:
// All the people should go to one of the other people's city.
// Two of them never go to the same city, because they are not willing to share a house.
// They want to maximize the sum of all people's travel distance. The travel distance of a person is the distance between the city he lives in and the city he travels to. 
// These N cities have N-1 highways connecting them. The travelers always choose the shortest path when traveling.



// #include <bits/stdc++.h>
// #define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// #define ll long long
// #define vi vector<int>
// #define vc vector<char>
// #define vll vector<long long>
// #define vvi vector<vector<int>>
// #define vpii vector<pair<int, int>>
// #define umii unordered_map<int, int>
// #define r(i, s, e) for (ll i = s; i < e; i++)
// #define r0(i, e, s) for(ll i = e; i >= s; i--)
// #define maxInVec(v) *max_element(v.begin(), v.end())
// #define minInVec(v) *min_element(v.begin(), v.end())
// #define maxIdxInVec(v) max_element(v.begin(), v.end()) - v.begin()
// #define minIdxInVec(v) min_element(v.begin(), v.end()) - v.begin()


// //Give us the size of the tree from the node where it is called
// int dfs(int u, int parent, vector<pair<int,int> > adj[], ll &ans, int N)
// {
//     int currentTreeSize = 1;
//     for(auto p : adj[u])
//     {
//         int v = p.first;
//         int wt = p.second;
//         //Skip the parent node (which is acting as nbr)
//         if(v==parent)
//         {
//             continue;
//         }
//         int childTreeSize = dfs(v, u, adj, ans, N);
//         int edgeContribution = 2 * min(childTreeSize, N - childTreeSize) * wt;
//         ans += edgeContribution;
//         //update the tree size by adding childTree Size
//         currentTreeSize += childTreeSize;
//     }
//     return currentTreeSize;
// }

// int main() 
// {
// 	// your code goes here
//     int test;
//     cin>>test;
//     int n, u,v,w;

//     //Graph
//     vector<pair<int,int> > adj[100005];
//     int tc = 1;

//     while(tc <= test)
//     {
//         cin>>n;
//         //reset the adj list before every  test case
//         for(int i=1; i<=n; i++)
//         {
//             adj[i].clear();
//         }
//         //scan the graph
//         for(int i=1; i<=n-1; i++)
//         {
//             cin>> u >> v >> w;
//             adj[u].push_back({v,w});
//             adj[v].push_back({u,w});
//         }

//         //dfs 
//         ll ans = 0;
//         dfs(1, -1, adj, ans, n);
//         cout << "Case #"<<tc<<": "<<ans <<endl;
//         tc = tc + 1;
//     }

    
// 	return 0;
// }










// Subarray Sum Divisible by N
// Given an integer array nums of size n , return the number of non-empty subarrays that have a sum divisible by n.
// A subarray is a contiguous part of an array.
// Constraints:
// 1 <= n <= 3 * 10^4
// 0 <= nums[i] <= 10^4
// Example
// Input: n= 5, nums= [4, 5, 0, 4, 2]
// Output: 4    


// #include <bits/stdc++.h>
// #define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// #define ll long long
// #define vi vector<int>
// #define vc vector<char>
// #define vll vector<long long>
// #define vvi vector<vector<int>>
// #define vpii vector<pair<int, int>>
// #define umii unordered_map<int, int>
// #define r(i, s, e) for (ll i = s; i < e; i++)
// #define r0(i, e, s) for(ll i = e; i >= s; i--)
// #define maxInVec(v) *max_element(v.begin(), v.end())
// #define minInVec(v) *min_element(v.begin(), v.end())
// #define maxIdxInVec(v) max_element(v.begin(), v.end()) - v.begin()
// #define minIdxInVec(v) min_element(v.begin(), v.end()) - v.begin()

// using namespace std;

// int solve(int n, vi v)
// {
//     vi prefix(n, 0);
//     prefix[0] = v[0] % n;
//     r(i, 1, n)
//     {
//         prefix[i] = (prefix[i - 1] + v[i]) % n;
//     }
//     umii mp;
//     r(i, 0, n)
//     {
//         if (prefix[i] < 0) 
//             prefix[i] += n; // Ensure non-negative remainder
//         mp[prefix[i]]++;
//     }
//     int ans = 0;
//     for (auto &it : mp)
//     {
//         int count = it.second;
//         ans += (count * (count - 1)) / 2; // Combinations of pairs
//     }
//     return ans;
// }

// void solve1()
// {
//     ll n;
//     cin >> n;
//     vll arr(n);
//     r(i, 0, n) cin >> arr[i];
//     cout << solve(n, arr);
//     return;
// }

// int main()
// {
//     fast;
//     // ll t; cin >> t;
//     // while(t--)
//     // {
//         solve1();
//     // }
//     return 0;
// }
// BIT MANUPLATION PROBLEMS

// QUESTION 1: UNIQUE NUMBER 
// you are given 2n+1 numbers where every number come 2ice except 1 number find that 1 number

// HINT: XOR of same numbers cancel each other i.e. 5^6^5 = 6

// #include<bits/stdc++.h>
// #define vi vector<int>
// using namespace std;
// int UniqueNumber(vi v)
// {
//     int res = 0;
//     for (size_t i = 0; i < v.size(); i++) res ^= v[i];
//     return res;
// }
// int main()
// {
//     vi v;
//     int x;
//     while (cin>>x)
//     {
//         if(x == -1) break;
//         v.push_back(x);
//     }
//     cout<<UniqueNumber(v)<<endl;
//     return 0;
// }


// QUESTION 2: UNIQUE NUMBERS - II
// you are given 2n+2 numbers where n number come 2ice except 2 numbers find those 2 numbers

// #include<bits/stdc++.h>
// #define vi vector<int>
// #define pi pair<int,int>
// using namespace std;
// int findRightBit(int a)
// {
//     int pos = 0;
//     while ((a & (1 << pos)) == 0) pos++;
//     return pos;
// }
// pi UniqueNumber2(vi v)
// {
//     int res = 0;
//     for (size_t i = 0; i < v.size(); i++) res ^= v[i];
//     int idx = findRightBit(res);
//     int num1 = 0, num2 = 0;
//     for (size_t i = 0; i < v.size(); i++)
//     {
//         if (v[i] & (1 << idx)) (num1 ^= v[i]);
//         else (num2^=v[i]);
//     }
//     return {num1, num2};
// }
// int main()
// {
//     vi v;
//     int x;
//     while (cin>>x)
//     {
//         if(x == -1) break;
//         v.push_back(x);
//     }
//     cout<<UniqueNumber2(v).first<<" "<<UniqueNumber2(v).second<<endl;
//     return 0;
// }


// QUESTION 3: UNIQUE NUMBERS - III
// you are given 3n+1 numbers where every number come 3ice except 1 number find that 1 number

// #include<bits/stdc++.h>
// #define vi vector<int>
// using namespace std;
// int numFromBits(vector<int> sumArr)
// {
// 	int num = 0;
// 	for(int i=0; i<32; i++)
//     {
// 		num += (sumArr[i] * (1<<i));
// 	}
// 	return num;
// }
// int UniqueNumber3(vi v)
// {
//     vi bits(32,0);
//     for(size_t i = 0; i <v.size(); i++)
//     {
//         for(int j = 0; j < 32; j++)
//         {
//             if(v[i] & (1 << j))
//             {
//                 bits[j]++;
//             }
//         }
//     }
//     for(int i = 0; i < 32; i++)
//     {
//         bits[i] %=3;
//     }
//     return numFromBits(bits);
// }
// int main()
// {
//     vi v;
//     int x;
//     while (cin>>x)
//     {
//         if(x == -1) break;
//         v.push_back(x);
//     }
//     cout<<UniqueNumber3(v)<<endl;
//     return 0;
// }
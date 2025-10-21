// BIG INTEGERS

// integer > 10^18 is considered as big integer
// in cpp we use arrays/string for solving
// in JAVA we uae a different class
// in python we solve it like normal integers

// large addition

// #include <bits/stdc++.h>
// using namespace std;
// string ladd(string str1, string str2) 
// {
//     if (str2.size() > str1.size()) swap(str1, str2);
//     reverse(str1.begin(), str1.end());
//     reverse(str2.begin(), str2.end());
//     string answer = "";
//     int carry = 0;
//     int n1 = str1.size(), n2 = str2.size();
//     for (int i = 0; i < n2; ++i) 
//     {
//         int digit1 = str1[i] - '0';
//         int digit2 = str2[i] - '0';
//         int sum = digit1 + digit2 + carry;
//         answer += (sum % 10) + '0';
//         carry = sum / 10;
//     }
//     for (int i = n2; i < n1; ++i) 
//     {
//         int digit = str1[i] - '0';
//         int sum = digit + carry;
//         answer += (sum % 10) + '0';
//         carry = sum / 10;
//     }
//     if (carry) answer += carry + '0';
//     reverse(answer.begin(), answer.end());
//     return answer;
// }
// int main() 
// {
//     string str1, str2;
//     cin >> str1 >> str2;
//     cout << ladd(str1, str2) << endl;
//     return 0;
// }


// large multiplication

// #include<bits/stdc++.h>
// using namespace std;
// string lmul(string num1, string num2) 
//     {
//         int n = num1.size(), m = num2.size();
//         vector<int> result(n + m, 0);
//         for (int i = n - 1; i >= 0; --i) 
//         {
//             for (int j = m - 1; j >= 0; --j) 
//             {
//                 int mul = (num1[i] - '0') * (num2[j] - '0');
//                 int sum = mul + result[i + j + 1];
//                 result[i + j + 1] = sum % 10;
//                 result[i + j] += sum / 10;
//             }
//         }
//         string ans = "";
//         for (int num : result)
//         {
//             if (!(ans.empty() && num == 0)) 
//             {
//                 ans.push_back(num + '0');
//             }
//         }
//         return ans.empty() ? "0" : ans;
//     }
// int main()
// {
//     string str1, str2;
//     cin>>str1>>str2;
//     cout<<lmul(str1, str2);
//     return 0;
// }

// BIT MANUPLATION

// bitwise operators 
/*
    binary AND              &
    binary OR               |
    binary XOR              ^      
    binary NOT              ~
    binary left shift       <<
    binary right shift      >>
*/

// #include<bits/stdc++.h>
// using namespace std;
// int main() 
// {
//     int a = 10;
//     int b = 5;
//     cout << "Binary AND: " << (a & b) << endl;      // convert to binary i.e. (1010 and 101 then use AND operator bitwise)
//     cout << "Binary OR: " << (a | b) << endl;       // convert to binary i.e. (1010 and 101 then use OR operator bitwise)
//     cout << "Binary XOR: " << (a ^ b) << endl;      
//     cout << "Binary NOT of a: " << ~a << endl;      // changes sign bit also, and for final answer invert all the bits and add 1 to it
//     cout << "Binary NOT of b: " << ~b << endl;      // it will give -(n+1)
//     cout << "Binary left shift of a by 1: " << (a << 1) << endl;        // multiply by 2
//     cout << "Binary right shift of a by 1: " << (a >> 1) << endl;       // divide by 2
//     return 0;
// }


// number id odd or even

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     if ((n & 1) == 0)
//         cout << "The number is even." << endl;
//     else
//         cout << "The number is odd." << endl;
//     return 0;
// }


// get ith bit

// #include<bits/stdc++.h>
// using namespace std;
// int getith(int n, int i)
// {
//     return (n & (1 << i));
// }
// int main()
// {
//     int n, i;
//     cout << "Enter a number: ";
//     cin >> n;
//     cout << "Enter the position: ";
//     cin >> i;
//     cout<<(getith(n,i)>0)? 1:0;
//     return 0;
// }


// clear ith bit

// #include<bits/stdc++.h>
// using namespace std;
// int clearith(int n, int i)
// {
//     return (n & ~(1 << i));
// }
// int main()
// {
//     int n, i;
//     cout << "Enter a number: ";
//     cin >> n;
//     cout << "Enter the position: ";
//     cin >> i;
//     cout << clearith(n, i) << endl;
//     return 0;
// }


// set ith bit

// #include<bits/stdc++.h>
// using namespace std;
// int setith(int n, int i)
// {
//     return (n | (1 << i));
// }
// int main()
// {
//     int n, i;
//     cout << "Enter a number: ";
//     cin >> n;
//     cout << "Enter the position: ";
//     cin >> i;
//     cout<< setith(n,i);
//     return 0;
// }

// update ith bit

// #include<bits/stdc++.h>
// using namespace std;
// int updateith(int &n, int i, int val)
// {
//     int mask = ~(1 << i);
//     return (n & mask) | (val << i);
// }
// int main()
// {
//     int n,val,i;
//     cout << "Enter a number: ";
//     cin >> n;
//     cout << "Enter the position: ";
//     cin >> i;
//     cout << "Enter the value: ";
//     cin >> val;
//     cout << updateith(n, i, val);
//     return 0;
// }

// clear last i bits

// #include<bits/stdc++.h>
// using namespace std;
// int clear_last_i(int n, int i)
// {
//     int mask = (1 << (i+1)) -1;
//     return n & (~mask);
// }
// int main()
// {
//     int n, i;
//     cin >> n;
//     cin >> i;
//     cout << clear_last_i(n, i) << endl;
//     return 0;
// }

// clear range of ith bits

// #include<bits/stdc++.h>
// using namespace std;
// int clear_range(int n, int s, int e)
// {
//     int mask = ((1 << (s - e + 1)) - 1) << e;
//     return n & (~mask); 
// }
// int main()
// {
//     int n, s, e;
//     cin >> n;
//     cin >> s;
//     cin >> e;
//     cout << clear_range(n, s, e) << endl;
//     return 0;
// }


// replace bits

// #include<bits/stdc++.h>
// using namespace std;
// int replaced_bits(int n,int m, int s, int e)
// {
//     int mask = ((1 << (s - e + 1)) - 1) << e;
//     return (n & (~mask)) | ((m << e) & mask);
// }
// int main()
// {
//     int n, s, e, m;
//     cin >> n >>m>>s>>e;
//     cout << replaced_bits(n, m, s, e) << endl;
//     return 0;
// }


// power of two

// #include<bits/stdc++.h>
// using namespace std;
// bool isPowerOfTwo(int n)
// {
//     return !(n & (n-1));
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << (isPowerOfTwo(n)? "Yes" : "No") << endl;
//     return 0;
// }


// power of four

// #include<bits/stdc++.h>
// using namespace std;
// bool isPowerOfFour(int n)
// {
//     if(n<= 0) return false;
//     return !(n&(n-1)) && (n%3 == 1);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << (isPowerOfFour(n)? "Yes" : "No") << endl;
//     return 0;
// }


// number of bits

// #include<bits/stdc++.h>
// using namespace std;
// int numberOFBits(int n)
// {
//     int count = 0;
//     while(n > 0)
//     {
//         if((n&1) == 1) count++;
//         n = n >> 1;
//     }
//     return count;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << numberOFBits(n) << endl;
//     return 0;
// }

// FASTER METHOD

// #include<bits/stdc++.h>
// using namespace std;
// int numberOFBits(int n)
// {
//     int count = 0;
//     while(n > 0)
//     {
//         n = n & (n - 1);        // difference in this method is upper will cheak each and every bit from last but this will check only set bits from last
//         count++;
//     }
//     return count;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << numberOFBits(n) << endl;
//     return 0;
// }


// convert to binary

// #include<bits/stdc++.h>
// using namespace std;
// int convertToBinary(int n)
// {
//     int binary = 0, i = 1;
//     while (n > 0) 
//     {
//         binary = binary + (n&1) * i;
//         n = n >> 1;
//         i = i * 10;
//     }
//     return binary; 
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << convertToBinary(n) << endl;
//     return 0;
// }

// number of consucetive bits

// #include<bits/stdc++.h>
// #define vi vector<int>
// using namespace std;
// int numberOFBits(int n)
// {
//     int count = 0;
//     vi v;
//     while(n > 0)
//     {
//         if((n&1) == 0)
//         {
//             v.push_back(count);
//             count = 0;
//         }
//         if((n&1) == 1) count++;
//         n = n >> 1;
//     }
//     v.push_back(count);
//     return *max_element(v.begin(), v.end());    
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << numberOFBits(n) << endl;
//     return 0;
// }
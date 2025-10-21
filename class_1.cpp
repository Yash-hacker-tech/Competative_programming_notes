// TIME SPACE

// we can use <ctime> library to calculate time


// CODE:


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     auto start_time = clock();

//     int arr[2] = { 5, 8};
//     int*ptr = arr; 
//     cout<<ptr<<endl;
//     ptr++;
//     cout<<ptr<<endl;
//     ptr -= 1;
//     (*ptr)++;
//     cout<<*ptr<<endl;
//     cout<<arr[0]<<" "<<arr[1]<<endl;
    
//     auto end_time = clock();
//     double time_taken = double(end_time - start_time) / CLOCKS_PER_SEC;
//     cout << "Time taken by function: " << fixed << time_taken << setprecision(5) << " sec" << endl;
//     return 0;
// }

// bubble sort vs merge sort

// #include<bits/stdc++.h>
// using namespace std;
// void BubbleSort(vector<int> &vector, int n)
// {
//     for(int  i = 0; i < n; i++)
//     {
//         for(int j = i+1; j < n; j++)
//         {
//             if(vector[i] > vector[j])
//             {
//                 swap(vector[i], vector[j]);
//             }
//         }
//     }
//     return;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> vector(n,0);
//     for(int i = 0; i < n; i++)
//     {
//         vector[i] = n-i;
//     }
//     auto start = clock();
//     BubbleSort(vector, n);
//     auto end = clock();
//     double time_taken = double(end - start) / CLOCKS_PER_SEC;
//     cout << "Time taken by bubble sort: " << fixed << time_taken << setprecision(5) << " sec" << endl;
//     auto start1 = clock();
//     sort(vector.begin(), vector.end());
//     auto end1 = clock();
//     double time_taken1 = double(end1 - start1) / CLOCKS_PER_SEC;
//     cout << "Time taken by merge sort: " << fixed << time_taken1 << setprecision(5) << " sec" << endl;
//     return 0;
// }


// NOTE :
// constraints
// if T = 1 sec = 10^8 poperations  

// NOTE:

// if N <= 11 then O(N!), O(N^6) are valid
// if N <= 18 then O(2^N*N^2) is valid
// if N <= 22 then O(2^N*N) is valid
// if N <= 100 then O(N^4) is valid
// if N <= 400 then O(N^3) is valid 
// if N <= 2000 then O(N^2 * logN) is valid 
// if N <= 10k then O(N^2) is valid 
// if N <= 1M then O(N * logN) is valid 
// if N <= 100M then O(N),O(logN),O(1) are valid 




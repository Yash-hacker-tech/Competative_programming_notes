// STL

// containers
/*
4 types [insertions, deletions, searches]
    1) sequence containers
        - array                 [fixed size]
        - vector                [variable size]
        - deque                 [variable size]{doubely ended queue}
        - list                  {linked list}
        - forward_list          {doubely linked list}
    2) associative container        they use tree like structures to store and they are ordered/sorted
        - set                   [stores only unique elements](ordered list)(sorted) 
        - map                   [used to store pairs of elements]{use binary search tree}            
        - multiset              [can store multiple elements with same values]
        - multimap              [can store pairs of elements with different values]
    3) unordered associative container
        - unordered set         [stores only unique elements](unordered list)(may be not sorted) [very fast O(1)]
        - unordered map         [used to store pairs of elements]{use binary search tree}   
        - unordered multiset    [can store multiple elements with same values]
        - unordered multimap    [can store pairs of elements with different values]
    4) container adaptors
        - stack
        - queue
        - priority queue        [heap]
*/


// ARRAY [STL]

// classical

// #include<iostream>
// using namespace std;
// void update(int *arr, int I, int val)   // if we want to use n or something then we need to paas because in function it plays with pointer which have size = 8 bits but usually we make array of integers ehich have size of 4*size thats why it will cause trouuble
// {
//     *(arr+I)= val;
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 9, 5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int val;
//     cin>>val;
//     int I;
//     cin>>I;
//     for(int i = 0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     update(arr, I, val);
//     cout<<"\n";
//     for(int i = 0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     sort(arr,arr+n);
//     for(int i = 0; i<n;i++)
//     {
//          cout<<arr[i]<<" ";
//     }
// }


// STL  [array]
// we can use include<array>

// #include<bits/stdc++.h>
// using namespace std;
// void update(array<int,5> &arr, int val, int I)
// {
//     arr[I] = val;
// }
// // use const for read only functions
// void print_array(const array<int,5> arr)              // no need to repass n because here we are passig entire object instead of pointer or address   
// {
//     int n = arr.size();
//     for(int i = 0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main()
// {
//     // making of array array<data_type, size> array_name = {_,_,_,_,_.......}
//     array<int, 5> arr = {1, 2, 3, 4, 5};
//     for(auto &x : arr)
//     {
//         cout<<x<<" ";
//     }
//     // arr[2] = 10;
//     update(arr,10,2);
//     cout<<"\n";
//     print_array(arr);
//     sort(arr.begin(), arr.end());   // in algorithm library
//     print_array(arr);
//     // fill
//     // making array filled with 0's
//     fill(arr.begin(), arr.end(), 0);
//     print_array(arr);
//     // makimg new array
//     array<int, 5> new_arr(arr);
//     new_arr.fill(3);
//     print_array(new_arr);
//     // find min and max
//     int min_val = *min_element(arr.begin(), arr.end());
//     int max_val = *max_element(arr.begin(), arr.end());
//     cout<<"Min: "<<min_val<<", Max: "<<max_val<<endl;
//     return 0;
// }


// some important functions for array STL

// #include<bits/stdc++.h>
// #define ll long long
// #define f(i,n) for(int i = 0; i < n; i++)
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     array<int, 5> A = {1,2,3,4,5};
//     array<int, 5> A2 = {6,7,8,9,10};
// // TIME COMPLEXTIY IS O(1)
//     // front()
//     cout<<"Front element of A: "<<A.front()<<endl;
//     // back()
//     cout<<"Back element of A: "<<A.back()<<endl;
//     // extracting element 
//     cout<<A2[2]<<"\n";
//     cout<<A2.at(2)<<"\n";
//     return 0;
// }


// VECTOR STL
// use #include<vector>
/*
    vectors are dynamic arrays with ability to resize itself automatically when element is added
    these are continous addresses
    and they increase their size by multipling their size by integers
*/

// functions for vector

/*
    [index] : element of index
    at(index) : element of index
    back() : return reference of last element
    front() : return reference of first element
    begin() : return type is use in algorithm functions
    end() : return type is use in algorithm functions
    capacity() : number of total places at that instant
    clear() : make size of vector 0
    empty() : return true if size of vector is 0
    shrink_to_fit() : shrink vector to fit size = capacity
    erase(index) : remove element
    erase(start_index, end_index) : remove elements from start_index to end_index
    insert(index, element) : insert element at index
    pop_back() : removes lasst element (note: not return last element)
    push_back(element) : add element at end
    reserve(new_capacity) : request new capacity
    resize(new_size) : request new size and fill the new size with default values
*/

// #include <iostream>
// #include <vector>
// int main() 
// {
//     std::vector<int> vec;
//     std::cout << "Initial Capacity: " << vec.capacity() << std::endl;
//     vec.push_back(10);
//     vec.push_back(20);
//     vec.push_back(30);
//     std::cout << "Capacity after adding 3 elements: " << vec.capacity() << std::endl;
//     std::cout << "Size before clear: " << vec.size() << std::endl;
//     std::cout << "Capacity before clear: " << vec.capacity() << std::endl;
//     vec.clear();
//     std::cout << "Size after clear: " << vec.size() << std::endl;
//     std::cout << "Capacity after clear: " << vec.capacity() << std::endl;
//     vec.shrink_to_fit();  // Frees excess memory
//     std::cout << "Size after shrink_to_fit: " << vec.size() << std::endl;
//     std::cout << "Capacity after shrink_to_fit: " << vec.capacity() << std::endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> vec = {1, 2, 3, 4, 5};
//     for(int i = 0; i < vec.size(); i++)
//     {
//         cout<<vec[i]<<" ";
//     }
//     cout<<endl;
//     vec.pop_back();
//     for(int i : vec)
//     {
//         cout<<i<<" ";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> vec = {1, 2, 3, 4, 5};
//     vec.push_back(6);
//     for(int i : vec)
//     {
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     vec.insert(vec.begin()+2, 7);
//     for(int i : vec)
//     {   
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     vector<int> V2(5,6);
//     for(int i : V2)
//     {
//         cout<<i<<" ";
//     }
//     return 0;
// }


// DEQUE STL
// use #include<deque>
/* DEQUEUE
    it is a sequence container with dynamic sizes that can be expanded and contracted on both sides
    it doesent gaurantee to store all of its elements in contigous storage locations: accessing elements in queue by ofsetting a pointer to another element causes undefined behaviour
    elements of deque can be scattered in different chunks of storage
*/


// functions for deque

/*
    [index] : element of index
    at(index) : element of index
    back() : return reference of last element
    front() : return reference of first element
    begin() : return type is use in algorithm functions
    end() : return type is use in algorithm functions
    capacity() : number of total places at that instant
    clear() : make size of vector 0
    empty() : return true if size of vector is 0
    shrink_to_fit() : shrink vector to fit size = capacity
    erase(index) : remove element
    erase(start_index, end_index) : remove elements from start_index to end_index
    insert(index, element) : insert element at index
    pop_back() : removes last element (note: not return last element)
    popfront() : removes front element (note: not return last element)
    push_front(element) : add element at front
    push_back(element) : add element at end
    resize(new_size) : request new size and fill the new size with default values
*/


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     deque<int> D1 = {1, 2, 3, 4, 5};
//     cout<<D1[1]<<"\n";
//     D1.push_back(6);
//     D1.push_front(0);
//     for(int x : D1)
//     {
//         cout<<x<<" ";
//     }
//     cout<<"\n";
//     D1.pop_back();
//     D1.pop_front();
//     for(int x : D1)
//     {
//         cout<<x<<" ";
//     }
//     cout<<"\n";
//     D1.insert(D1.begin()+2, 7);
//     for(int x : D1)
//     {
//         cout<<x<<" ";
//     }
//     cout<<"\n";
//     deque<int> D2(4,20);
//     for(int x : D2)
//     {
//         cout<<x<<" ";
//     }
//     deque<int> D3(D2.begin(),D2.end());
//     for(int x : D3)
//     {
//         cout<<x<<" ";
//     }
//     cout<<"\n";
//     return 0;
// }


// STACKS
// #include<stack>

/* Stack
    Stack is a linear data structure that follows the Last In First Out (LIFO) principle.
    it allows adding and removing elements from the top.
    push(x) : adds element x to top of the stack
    pop() : removes the top element from the stack          // doesn't return anything
    top() : returns the top element of   the stack
    empty() : returns true if stack is empty, false otherwise
    size() : returns the number of elements in the stack
    peek() : returns the top element of the stack without removing it
    swap() : swaps the contents of stack with another stack
    clear() : removes all elements from the stack
    emplace(args...) : constructs and employs a new element on top of the stack
    emplace_back(args...) : constructs and employs a new element at the end of the stack
    emplace_front(args...) : constructs and employs a new element at the beginning of the stack
    assign(n, val) : assigns n copies of val to the stack
    assign(first, last) : assigns elements in range [first, last) to the stack
    assign(il, ir) : assigns elements in range [il, ir) to the stack
*/


// QUEUE
// #include<queue>

/* Queue
    Queue is a linear data structure that follows the First In First Out (FIFO) principle.
    it allows adding and removing elements from the front.
    push(x) : adds element x to the back of the queue
    pop() : removes the element from the front of the queue          // doesn't return anything
    front() : returns the front element of the queue
    back() : returns the last element of the queue
    empty() : returns true if queue is empty, false otherwise
    size() : returns the number of elements in the queue
    swap() : swaps the contents of queue with another queue
    clear() : removes all elements from the queue
    emplace(args...) : constructs and employs a new element at the back of the queue
    emplace_back(args...) : constructs and employs a new element at the end of the queue
    emplace_front(args...) : constructs and employs a new element at the beginning of the queue
    assign(n, val) : assigns n copies of val to the queue
    assign(first, last) : assigns elements in range [first, last) to the queue
    assign(il, ir) : assigns elements in range [il, ir) to the queue
*/


// HEAP
// Priorty queue
// #include<queue>

/* Priority Queue
    Priority queue is a type of container adaptor that provides a sorted sequence based on a comparison function (by default, less than operator).
    push(x) : adds element x to the priority queue
    pop() : removes the element with highest priority (according to the comparison function)
    top() : returns the element with highest priority (according to the comparison function)
    empty() : returns true if priority queue is empty, false otherwise
    size() : returns the number of elements in the priority queue
    swap() : swaps the contents of priority queue with another priority queue
    clear() : removes all elements from the priority queue
    emplace(args...) : constructs and employs a new element with the given arguments at the back of the priority queue
    emplace_back(args...) : constructs and employs a new element with the given arguments at the end of the priority queue
    emplace_front(args...) : constructs and employs a new element with the given arguments at the beginning of the priority queue
    assign(first, last) : assigns elements in range [first, last) to the priority queue
    assign(il, ir) : assigns elements in range [il, ir) to the priority queue
*/

// max heap by default

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     priority_queue<int> pq;
//     pq.push(5);
//     pq.push(3);
//     pq.push(2);
//     pq.push(4);
//     pq.push(1);
//     while(!pq.empty())
//     {
//         cout<<pq.top()<<" ";
//         pq.pop();
//     }
//     return 0;
// }

// for min heap

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     priority_queue<int, vector<int>, greater<int>> pq;
//     pq.push(5);
//     pq.push(3);
//     pq.push(2);
//     pq.push(4);
//     pq.push(1);
//     while(!pq.empty())
//     {
//         cout<<pq.top()<<" ";
//         pq.pop();
//     }
//     return 0;
// }









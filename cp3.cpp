/*Given an read-only array of size n, find all elements in array that appear more than n/k times. 
For example, if the input arrays is {3, 1, 2, 2, 1, 2, 3, 3} and k is 4, then the output should be [2, 3]. 
Note that size of array is 8 (or n = 8), so we need to find all elements that appear more than 2 (or 8/4) times. 
There are two elements that appear more than two times, 2 and 3

Constraints:-

1) you can not perform sorting of array
2) you can not use nesting of loop
3) value of k must be 2<= K < n
4) you can not use build-in function in python for count*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void check(int arr[], int n, int k)
{
    int x = n / k;
    unordered_map<int, int> freq;
    for(int i = 0; i < n; i++)
        freq[arr[i]]++;
    for(auto i : freq)
    {
        if (i.second > x)
            cout << i.first << endl;
    }
}
int main()
{
    int a[] = { 3, 1, 2, 2, 1, 2, 3, 3 };
    int n = sizeof(a) / sizeof(a[0]);
    int k = 4;
    check(a, n, k);
    return 0;
}
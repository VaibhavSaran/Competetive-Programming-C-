/*Problem Statement: Arun wants to perform sorting of an array of size n Element with following contraints
1) Arun don't want to use in-built function for sorting
2) Only single for-loop or while-loop is allowed*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int j,temp,a[100],n;
	cout<<"Enter the number of elements in array: ";
	cin>>n;
	cout<<"Enter the array: ";
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i = 0 ; i<n-1 ; i++)//Never implement this sorting unless asked as it is very ineffecient way
	{
    	int flag = 0;
    	if(a[i]>a[i+1])
    	{
        	temp = a[i];
        	a[i] = a[i+1];
        	a[i+1] = temp;
        	i=-1;
        	flag = 1;
    	}       
    	if(i == n-2-j)
    	{
        	if(!flag) 
        		break;
        	i = -1;
        	j++;
    	}
	}
	cout<<"Sorted array is: ";
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}
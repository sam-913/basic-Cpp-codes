//Write a program to store random numbers into an array of n integers 
//and then find out the smallest and largest number stored in it, n is the user input.

#include<iostream>
#include<stdlib.h>
using namespace std;

int main ()
{
    int n;
	cout<<"Enter size of the array: ";
	cin>>n;
	int arr[n];

    for(int i=0;i<n;i++)
	{
		int num = rand()%100;
		arr[i]=num;
	}
 
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
 
	return 0;
}
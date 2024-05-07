//searching

#include <iostream>
#include <climits>

using namespace std;

int ls(int ar[],int n, int r) //linear search O(n)
{
    int i,c;
    for (i=0;i<n;i++)
        if ((ar[i])==r)
            return i;
    
    return -1;
}

int bs(int ar[], int n, int c) //binary search  O[log n base2]
{
    int i , m=0 , f = 0,l = n ;
    while (f<=l)
    {
        m=(f+l)/2;
        if ( (ar[m])==c)
            return m;
        else if ( ar[m] > c)
            l=m-1;
        else if ( ar[m] < c)
            f=m+1;
    }
    return -1;
}

int main() 
{
    cout<<"enter n : ";
    int n = 0;
    int b,c,d;
    cin>> n ;
    int a[n];
    for (int i=0;i<n;i++)
        cin>>a[i];
    cout<<" ARRAY : ";
    for (int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<"\nEnter key : ";
    cin>> c ;
    d=ls(a,n,c);
    cout<<(d)<<endl;
    d=bs(a,n,c);
    cout<<"Index : "<<(d)<<endl;
    return 0;
}
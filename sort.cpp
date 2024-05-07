//sorting 
#include <iostream>
#include <stdio.h>
using namespace std;

void s_s(int n , int a[n]) //selection sort
{
    int i, j,t;
    for (i=0;i<(n-1);i++)
    {
        for (j=i;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }
    for (i=0;i<n;i++)
        cout<<a[i]<<endl;
}
void b_sort(n , a)
{
    int i, j ;
    for (i=0;i<n;i++)
    {
        for (j=1;j<n;j++)
        {
            
        }
    }
    for (i=0;i<n;i++)
        cout<<a[i]<<endl;
}
int main ()
{
    int n;
    cout<<"enter n : "<<endl;
    cin >>n;
    int a[n],i, b;
    for (i = 0; i<n ; i++)
        cin>>a[i];
    cout<<"SORTED ARRAY :"<<endl;
    s_s(n , a);
}
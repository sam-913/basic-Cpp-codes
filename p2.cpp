//max min array

#include<iostream>
#include<stdio.h>
using namespace std;
int main ()
{
    int n , m , i;
    printf("Enter n : ");
    scanf("%d",&n);
    int a[n];
    for (i = 0; i<n ; i++)
    {
        cin>>a[i];
    }
    m=a[0];
    for (i = 0; i<n ; i++)
    {
        if(a[i]<m)
            m=a[i];
        cout<<"\nMin for index "<<i<<" : "<<m;
    }
    cout<<"\n";
    for (i = 0; i<n ; i++)
    {
        m=max(m,a[i]); // m = max(a,b)
        cout<<"\nMax for index "<<i<<" : "<<m;
    }
    return 0;
}
//sunarray
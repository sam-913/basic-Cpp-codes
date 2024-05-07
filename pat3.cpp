#include<iostream>
#include <math.h>
using namespace std;
void p1()
{
    char c,ch;
    for (c='A';c<='E';c++)
    {
        for (ch='A';ch<=c;ch++)
            cout<<c<<"\t";
        cout<<"\n";
    }
}
void p2(int n)
{
    int i,j,k;
    for (i=1;i<=n;i++)
    {
        for (j=i;j<=n;j++)
            cout<<'\t';
        for (k=1;k<=(2*i-1);k++)
            cout<<"*"<<'\t';
        cout<<endl;
    }
}
void p3()
{
    int i,j,k,n=5,l;
    for (i=1;i<=5;i++)
    {
        for (j=i;j<=5;j++)
            cout<<'\t';
        for (k=1;k<i;k++)
            cout<<(k)<<'\t';
        for (l=1;l<=i;l++)
            cout<<(i-l+1)<<'\t';
        cout<<endl;
    }
}
void p4(int n)
{
    int m=n,i,c=0,a,b,d;
    while(n!=0)
    {
        c++;
        n=n/10;
    }
    cout<<"count:"<<c<<endl;
    n=m;
    if (c%2==0)
    {
        b=pow(10,((c/2)-1));
        a=n/b;
        m=a%100;

        cout<<n<<" "<<m<<endl; 
    }
    else
    {
        b=pow(10,((c/2)));
        a=n/b;
        m=a%10;

        cout<<n<<" "<<m<<endl; 
    }
}
void p5 (int n)
{
    int i,j,k;
    for (i=1;i<=n;i++)
    {
        k=1;
        for(j=1;j<=i;j++)
        {
            if(i%2==0 && k%2==0)
            cout<<"0";
            else if(i%2==0 && k%2!=0)
            cout<<"1";
            if(i%2!=0 && k%2==0)
            cout<<"1";
            else if(i%2!=0 && k%2!=0)
            cout<<"0";
            k++;
        }
        cout<<endl;
    }
}
bool p6(int n)
{
    int i,c=0;
    for (i=1;i<n;i++)
    {
        if (n%i==0)
            c+=i;
    }
    cout<<endl<<"factorial of "<<n<<": "<<c<<endl;
    i=(n==c);
    return (i);
}
void p7(int n)
{
    int a, b, c ,i ;
    a=0;
    b=1;
    if (n>=1)
        cout<<a<<"\t";
    if (n>=2)
        cout<<b<<"\t";
    if (n>2)
        for (i=3;i<=n;i++)
        {
            c=a+b;
            cout<<c<<"\t";
            a=b;
            b=c;
        }
}

int main ()
{
    p1();
    p2(5);
    p3();
    p4(123456);
    p4(789);
    p5(7);
    bool m = p6(496);
    cout<<m<<endl;
    p7(15);

    return 0;
}
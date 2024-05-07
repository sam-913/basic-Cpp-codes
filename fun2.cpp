#include<iostream>
#include <cmath>
using namespace std;
//sum of n natural nos
//pythagorean tripets
//bin-dec oct-dec hex-dec dec-bin dec-oct dec-hex
//add binary
int nsum (int n)
{
    int i,s=0;
    for(i=1;i<=n;i++)
        s=s+i;
    int sum=n(n+1)/2;
    cout<<"sum="<<sum;
    return s;
}
int pyt (int a,int b, int c)
{
    int x = (max(a,max(b,c)));
    int y,z;
    if(x==a)
        y=b;
        z=c;
    if(x==b)
        y=a;
        z=c;
    if(x==c)
        y=a;
        z=b;
    if((x*x)==((y*y)+(z*z)))
    {   return (true);
        cout<<"true!";
    }
    return (false);
}
int bin_dec(int b)
{
    int r,d,c=0;
    while(b!=0)
    {
        ++c;
        r=b%10;
        d=d+r*pow(2,c);
        b=b/10;
    }
    return (d); 
}
int oct_dec(int o)
{
    int r,d,c=0;
    while(o!=0)
    {
        ++c;
        r=o%10;
        d=d+r*pow(8,c);
        o=o/10;
    }
    return (d);
} 
int hex_dec(int h)
{
    int r,d,c=0;
    while(h!=0)
    {
        ++c;
        r=h%10;
        d=d+r*pow(16,c);
        h=h/10;
    }
    return (d);
}
int dec_bin(int n)
{
    int x=1,a=0,l;
    while(x<=n)
        x*=2;
    x/=2;
    while (x>0)
    {
        l=n/x;
        n-=(l*x);
        x=x/2;
        a=a*10+l;
    }
    cout<<"ans : "<<a;
    return a;
}
int dec_oct (int n)
{
    int x=1,a=0,l;
    while(x<=n)
        x*=2;
    x/=2;
    while (x>0) 
    {
        l=n/x;
        n-=(l*x);
        x=x/2;
        a=a*10+l;
    }
    cout<<"ans : "<<a;
    return a;
}
int main()
{
    int a,x,y,z,bin;
    cin>>a;
    cout<<nsum(a);
    cin>>x>>y>>z;
    a=pyt(x,y,z);
    cout<<bin_dec(101)<<"\n";
    cout<<oct_dec(234)<<"\n";
    cout<<hex_dec(234)<<"\n";
    cout<<dec_bin(7)<<"\n";
    cout<<"\n";
}
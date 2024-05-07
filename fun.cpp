#include<iostream>
#include<cmath>
using namespace std;
int arm (int n)
{
    int r,a=0,m;
    m=n;
    while(n!=0)
    {
        r=n%10; 
        a = a + pow(r,3);
        cout<<pow(r,3)<<"\n";
        n=n/10;
    }
    if(a==m)
        cout<<"armstrong ";
    else
        cout<<"not armstrong ";
    return 0;
}
int factorial (int n)
{
    int i;
    int f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return(f);
}
int rev (int n)
{
    int r, rv=0;
    while(n!=0)
    {
        r=n%10;
        rv=rv*10+r;
        n=n/10;
    }
    return(rv);
}
bool pal (int rev,int m)
{
    if (rev==m)
        return(true);
    else
        return(false);
}
int pr (int n)
{
    int i,c=0;
    for(i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            cout<<"not_prime "<<n;
            c++;
            break;
        }
    }
    if(c==0)
        cout<<endl<<"prime "<<n<<endl;
    return 0;
}
int factor (int n)
{
    int i;
    cout<<"factors : ";
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            cout<<i<<" ";
    }
    return 0;
}
int main()
{
    int n,m,c;
    n=8;
    cout<<"no. "<<arm(153)<<"\n";
    cout<<"factorial: "<<factorial(n)<<endl;
    cout<<factor(n)<<endl;
    m=rev(n);
    cout<<"reveresed no."<<rev(n)<<endl;
    cout<<"palindrome-"<<pal(m,n)<<endl;
    cout<<pr(n)<<endl;
    return 0;
}
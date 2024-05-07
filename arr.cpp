//chks

#include <iostream>
using namespace std;
int main ()
{
    int a,b,c,n,r,rev=0,i;
    cin>>a>>b>>c;
    if((a*a==(b*b+c*c)) or (b*b==(a*a+c*c)) or (c*c==(b*b+a*a)))
    cout<<"right angled triangle "<<endl;
    cin>>n;
    while (n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    cout<<rev<<endl;
    int b1[3], a1[5]={1,5,0,8,6};
    for (i=0;i<5;i++)
        cout<<a1[i]<<endl;
    for (i=0;i<3;i++)
        cin>>b1[i];
    for (i=2;i>=0;i--)
        cout<<b1[i];
    return 0;
}


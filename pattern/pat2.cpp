#include<iostream>
using namespace std;
x
    cout<<endl;
    for (i=1;i<=5;i++)
    {
        for (k=5;k>=i;k--)
            cout<<" ";
        for (j=1;j<=i;j++)
            cout<<"*";
        cout<<"\n";
    }
    cout<<"\n";
    for(i=5;i>=1;i--)
    {
        for(j=5;j>=i;j--)
            cout<<i<<" ";
        cout<<"\n";
    }
    for(i=1;i<=6;i++)
    { 
        for (j = 1; j<=6; j++)
        {
            if(i==1 || i==6 || j==1 || j==6)
                cout<<"*";
            else
                cout<<" "; 
            if(j==6)
                cout<<" ;)";
        }   
        cout<<endl;
    }
    for (i=1;i<=5;i++)
    {
        for (j=5;j>=i;j--)
            cout<<i<<" ";
        cout<<" \n";
    }
    for (i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
            cout<<j<<" ";
        cout<<endl;
    }
    for (i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
            cout<<i<<" ";
        cout<<endl;
    }
    cout<<endl;
    for (i=1;i<=5;i++)
    {
        for (j=5;j>=i;j--)
            cout<<"6";
        cout<<".";
        for (k=1;k<=i;k++)
            cout<<"9";
        cout<<"\n";
    }
    cout<<endl;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>i;j--)
            cout<<" ";
        for(k=i;k>=1;k--)
            cout<<k;
        for(l=2;l<=i;l++)
            cout<<l;
        cout<< endl;
    }
    cout<<"      * \n";
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
            cout<<" ";
        cout<<"*";
        for(k=1;k<=(2*i-1);k++)
            cout<<" ";
        cout<<"*";
        cout<<endl;
    }
    cout<<"************* \n";
    for(i=5;i>=1;i--)
    {
        for(l=5;l>=i;l--)
            cout<<" ";
        cout<<"*";
        for (j=(2*i-1);j>=1;j--)
            cout<<" ";
        cout<<"*";
        cout<<endl;
    }
    cout<<"      *\n";
    n=5;
    int s=(2*5-1)/2;
    for (i=1;i<=5;i++)
    {
        for (j=1;j<=s+1;j++)
            cout<<" ";
        for(j=1;j<=2*i-1;j++)
        {
            if(j==1||j==(2*i-1))
                cout<<".";
            else
                cout<<"o";
        }
        cout<<endl;
        --s;
    }
    cout<<".ooooooooo. \n";
    s=0;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=s+1;j++)
            cout<<" ";
        for(j=1;j<=2*i-1;j++)
        {
            if(j==1||j==(2*i-1))
                cout<<".";
            else
                cout<<"o";
        }
        cout<<endl;
        ++s;
    }
    cout<<endl;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
            cout<<" ";
        for(j=1;j<=(2*i-1);j++)
        {
            if(j==1||j==(2*i-1))
                cout<<".";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    for (i=5;i>=1;i--)
    {
        for (j=5;j>=i;j--)
            cout<<" ";
        for (j=(2*i-1);j>=1;j--)
        {
            if(j==1||j==(2*i-1))
                cout<<".";
            else
                cout<<" ";
        }
        cout<<endl;    
    }
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
            cout<<" ";
        for(j=1;j<=(2*i-1);j++)
        {
            if(j%2==0)
                cout<<"1";
            else
                cout<<"0";
        }
        cout<<endl;
    }
    n=5;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            cout<<" ";
        for(j=1;j<=4;j++)
            cout<<"==";
        cout<<endl;
    }
    for(i=1;i<=5;i++)
    {
        for(j=i;j<=5;j++)
            cout<<" ";
        m=0;
        while(m<=4)
        {
            cout<<"==";
            m++;
        }
        cout<<endl;
    }
    for (i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
            cout<<" ";
        for(j=1;j<=5;j++)
        {
            if(i==1||i==5)
                cout<<"=";
            else if(j==1||j==5)
                cout<<"=";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
    for (i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
            cout<<" ";
        for(j=1;j<=(2*i-1);j++)
            cout<<i;
        cout<<endl;
    }
    for(i=0;i<4;i++)
    {
        for(j=4;j>=i;j--)
            cout<<"O";
        for(j=0;j<=(2*i-1);j++)
            cout<<".";
        for(j=4;j>=i;j--)
            cout<<"O";
        cout<<endl;
    }
    for(i=4;i>=0;i--)
    {
        for(j=4;j>=i;j--)
            cout<<"O";
        for(j=(2*i-1);j>=0;j--)
            cout<<".";
        for(j=4;j>=i;j--)
            cout<<"O";
        cout<<endl;
    }
    cout<<endl;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=2*i;j++)
            if(j==1||j==(2*i-1))
                cout<<"😍";
            else
                cout<<" ";  
        cout<<endl;
        if(i==5)
            for(j=1;j<=5;j++)
                cout<<"😍 ";
    }
    return 0;
}

//1.2
//LOGIC BUILD UP

#include<iostream>
using namespace std;

int main()
{
    //pattern1
    for (int i =0;i<5;i++)
    {
        for (int j =0;j<5;j++)
            cout<<"*";
        cout<<"\n";
    }

    //pattern2
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<=i;j++)
            cout<<"*";
        cout<<"\n";
    }

    //pattern3
    for (int i =1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
            cout<<j;
        cout<<"\n";
    }

    //pattern4
    for(int i=1; i<=5;i++)
    {
        for (int j=1;j<=i;j++)
            cout<<i;
        cout<<"\n";
    }

    //pattern5
    for(int i=5;i>=1;i--)
    {
        for (int j=1;j<=i;j++)
            cout<<"*";
        cout<<"\n";
    }

    //pattern6
    for(int i=5;i>=1;i--)
    {
        for (int j=1;j<=i;j++)
            cout<<j;
        cout<<"\n";
    }

    //pattern7
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>i;j--)
        { 
            cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++)
        {    
            cout<<"*";
        }
        cout<<"\n";
    }

    //pattern8
    for(int i=5; i>=1;i--)
    {
        for(int j=5;j>i;j--)
            cout<<" ";
        for(int k=(2*i-1);k>=1;k--)
            cout<<"*";
        cout<<"\n";
    }

    //pattern9
    for(int i=1; i>=10; i++)
    {
        for(int j=1; j<=5; j++)
        {
            cout<<"*";
        }
        for(int j=10;j>=5;j--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    //pattern10
    for(int i=1;i<5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>i;j--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    //pattern11
    for (int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(j%2==0)
                cout<<" 1 ";
            else
                cout<<" 0 ";
        }
        cout<<"\n";
    }

    //pattern12
    int y=3;
    for (int i =1 ; i <=4; i++)
    {
        for(int j=1; j<= i; j++)
            cout<<j;
        for(int k =1; k<=(2*y);k++)
        {  
            cout<<" ";  
        }
            y--; 
        for(int l=i; l>=1; l--)
            cout<<l;
        cout<<endl;
    }

    //pattern13
    int f=0;
    for (int i=1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
        {
            f++;   
            cout<<f<<" ";
        }
        cout<<"\n";
    }

    //pattern14
    for (char a = 'A'; a<= 'E'; a++)
    {
        for (char a1 = 'A'; a1<= a; a1++)
            cout<<a1;
        cout<<"\n";
    }

    //pattern15
    for (char a = 'E'; a >= 'A'; a--)
    {
        for (char a1 = 'A'; a1<= a; a1++)
            cout<<a1;
        cout<<"\n";
    }

    //pattern16
    for (char a = 'A'; a<= 'E'; a++)
    {
        for (char a1 = 'A'; a1<= a; a1++)
            cout<<a;
        cout<<"\n";
    }

    //pattern17
    for (char a='a'; a<='d';a++)
    {
        for(char a1='d';a1>=a;a1--)
            cout<<" ";
        for (char a1='a'; a1<a; a1++)
            cout<<a1;
        for (char a1=a; a1 >= 'a'; a1--)
            cout<<a1;
        cout<<endl; 
    }

    //pattern18
    for (char a='e'; a>='a';a--)
    {
        for (char a1=a; a1<='e';a1++)
            cout<<a1;
        cout<<endl;
    }

}

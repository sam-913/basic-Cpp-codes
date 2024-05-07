
//1.4
//count evenlydivides

#include<iostream> 
using namespace std;

class Solution{
public:
    int evenlyDivides(int N){
        int f=0,n=N;
        while (N!=0){
           int r=n%10;
           if(r>0 && N%r==0)
            f+=1;
           n=n/10;
        }
        return f;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
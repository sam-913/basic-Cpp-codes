
//1.1
//if-else

#include<iostream>
using namespace std;


//User function Template for C++

class Solution {
  public:
    string compareNM(int n, int m)
    {
        if (n>m)
            return"greater";
        if (n<m)
            return"lesser";
        if (n==m)
            return"equal";
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        int n,m ;    cin>>n>>m;
        Solution obj;
        cout<<obj.compareNM(n,m)<<"\n";
    }
    return 0;
}

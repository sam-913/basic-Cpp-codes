
#include<iostream> 
using namespace std; 

//1.4
//sum of all divisors till n

class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        long long f=0;
        int i;
        for (int i = 1; i <= N; ++i){
            f += (N/i) * i;
            cout<<i<<"-"<<f<<"\n";}
        return f;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        long long ans  = ob.sumOfDivisors(N);
        cout<<"\n"<<ans<<endl;
    }
    return 0;
}

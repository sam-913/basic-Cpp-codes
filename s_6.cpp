
//1.4
//armstrong

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string armstrongNumber(int n){
        int m=n,r,a=0;
        while (m!=0){
            r=m%10;
            a=a+(r*r*r);
            m/=10;
        }
        if (n==a)
            cout<<"Yes";
        else
            cout<<"No";
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}
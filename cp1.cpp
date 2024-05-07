#include<iostream>
using namespace std;

int main ()
{
    //#ifndef online_judge
    //    freopen("i.txt","r",stdin);
    //    freopen("o.txt","w",stdout);
    //#endif

    int n ,i, l, r;
    cin>>n;
    int a[n];
    long long s=0;
    for (i=0;i<n;i++)
        cin>>a[i];
    int q;
    cin >> q;
    while(q--){
        cin>>l>>r;
        int s=0;
        for(i=l;i<=r;i++)   s+=a[i];
        cout<<s<<endl;
    }
}

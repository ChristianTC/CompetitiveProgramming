#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        int n,r;
        cin>>n;
        r=((n*567)/9+7492)*235/47-498;
        cout<<abs((r%100)/10)<<endl;
    }

    return 0;
}

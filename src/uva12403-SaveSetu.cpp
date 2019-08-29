#include<iostream>
using namespace std;
int main()
{
    int n,s=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string opc;
        cin>>opc;
        if(opc=="donate")
        {
            int k;
            cin>>k;
            s+=k;
        }
        else if(opc=="report")
        {
            cout<<s<<endl;
        }
    }
    return 0;
}

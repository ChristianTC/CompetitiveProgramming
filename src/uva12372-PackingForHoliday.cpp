#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int L,W,H;
        cin>>L>>W>>H;
        if(L<=20 && W<=20 && H<=20)
            cout<<"Case "<<i<<": good"<<endl;
        else
            cout<<"Case "<<i<<": bad"<<endl;
    }


    return 0;
}

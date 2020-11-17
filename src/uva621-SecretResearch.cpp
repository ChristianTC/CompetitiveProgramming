#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string opc;
        cin>>opc;
        if(opc.size()<=2 && (opc=="1" || opc=="4" || opc=="78"))
            cout<<"+"<<endl;
        else if(opc[opc.size()-1]=='5' && opc[opc.size()-2]=='3')
            cout<<"-"<<endl;
        else if(opc[0]=='9' && opc[opc.size()-1]=='4')
            cout<<"*"<<endl;
        else
            cout<<"?"<<endl;
    }

    return 0;
}

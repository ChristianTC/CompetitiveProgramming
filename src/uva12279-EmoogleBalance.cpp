#include<iostream>

using namespace std;

int main(){
    int n,c=0;
    while(cin>>n)
    {
        c++;
        if(n==0)
            break;
        int v,s=0;
        for(int i=0;i<n;i++)
        {
            cin>>v;
            if(v>0)
                s++;
            else
                s--;
        }
        cout<<"Case "<<c<<": "<<s<<endl;
    }


    return 0;
}

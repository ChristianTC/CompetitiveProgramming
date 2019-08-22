#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int op1=max(a,b);
        int op2=max(c,b);
        int op3=max(a,c);
        cout<<"Case "<<i+1<<": "<<min(min(op1,op2),op3)<<endl;
    }

    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string number;
        cin>>number;
        if(number.size()==3)
        {
            if(number[0]=='o' && number[1]=='n')
                cout<<1<<endl;
            else if(number[1]=='n' && number[2]=='e')
                cout<<1<<endl;
            else if(number[0]=='o' && number[2]=='e')
                cout<<1<<endl;
            else if(number[0]=='t' && number[1]=='w')
                cout<<2<<endl;
            else if(number[0]=='t' && number[2]=='o')
                cout<<2<<endl;
            else if(number[1]=='w' && number[2]=='o')
                cout<<2<<endl;
        }
        else if(number.size()==5)
        {
            if(number[1]=='h' && number[2]=='r' && number[3]=='e' && number[4]=='e')
                cout<<3<<endl;
            else if(number[0]=='t' && number[2]=='r' && number[3]=='e' && number[4]=='e')
                cout<<3<<endl;
            else if(number[0]=='t' && number[1]=='h' && number[3]=='e' && number[4]=='e')
                cout<<3<<endl;
            else if(number[0]=='t' && number[1]=='h' && number[2]=='r' && number[4]=='e')
                cout<<3<<endl;
            else if(number[0]=='t' && number[1]=='h' && number[2]=='r' && number[3]=='e')
                cout<<3<<endl;

        }
    }

    return 0;
}

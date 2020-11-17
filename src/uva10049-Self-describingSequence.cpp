#include<iostream>
using namespace std;
int main(){

    int n;

    while(cin>>n){
        int c=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                c++;
                for(int k=0;k<j;k++)
                {
                    cout<<i;
                }
                cout<<endl;
                    if(c==i)
                    {
                        c=0;
                        break;
                    }
            }
            cout<<endl;

        }
    }
    return 0;
}
//1 22 33 444 555 6666 7777 8888 99999 10*5 11*5 12*6 13*6 14*6 15*6 16*7 17*7 18*7 19*7 20*8
//1 2 2 3 3 4 4 4 5 5 5 6 6 6 6 7 7 7 7 8
//1
//22
//33
//444
//555
//6666
//7777
//8888
//99999
//11111
//11111

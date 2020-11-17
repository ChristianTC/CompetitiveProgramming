#include <iostream>

using namespace std;

int main(){

    int x,y,n,m,a,b,c,aux;
    while(cin>>n>>m){

        a=n;b=m;aux=0;

        x=max(m,n);
        y=min(m,n);
        for(int i=y;i<=x;i++)
        {
            //cout<<i<<endl;
            a=i;
            c=1;
            while(a!=1){
                if(a%2==0)
                    a=a/2;
                else
                    a=3*a+1;
                //cout<<a<<" ";
                c++;
            }
            if(c>=aux)
                aux=c;

            //cout<<endl<<c<<endl;
        }
        cout<<n<<" "<<m<<" "<<aux<<endl;
    }
    return 0;
}

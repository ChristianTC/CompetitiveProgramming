
#include<iostream>
#include<cstdio>

using namespace std;

int main(){
    char a[255];
    bool aux=false;
    while(scanf("%s",a)!=EOF){
        for(int i=0;i<255;i++)
        {
            if(a[i]=='"' && aux==false)
            {
                aux=true;
                cout<<"``";
            }
            else if(a[i]=='"' && aux==true){
                aux=false;
                cout<<"''";
            }
            else
                cout<<a[i];
        }
    };
    cout<<endl;

    return 0;
}


#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int main(){
    string a;
    bool aux=false;
    while(getline(cin,a)){
        for(int i=0;i<a.size();i++)
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

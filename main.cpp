
#include<iostream>

using namespace std;

int main(){

    string a;
    cin>>a;
    bool aux=false;
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
    cout<<endl;

    return 0;
}


#include<iostream>
#include<string>

using namespace std;

int main(){
    string a;
    bool aux=false;
    while(getline(cin,a)){
        for(string::iterator iter = a.begin(); iter != a.end(); ++iter)
        {
            if(*iter=='"' && aux==false)
            {
                aux=true;
                cout<<"``";
            }
            else if(*iter=='"' && aux==true){
                aux=false;
                cout<<"''";
            }
            else
                cout<<*iter;
        }
        cout<<endl;
    }

    return 0;
}

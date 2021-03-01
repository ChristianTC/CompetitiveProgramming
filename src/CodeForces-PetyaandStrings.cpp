#include<iostream>
#include <string>
using namespace std;

int main(){
    string a,b,aa="",bb="";
    cin>>a>>b;
    for(int i=0;i<a.size();i++){
        aa+=tolower(a[i]);
    }
    for(int i=0;i<b.size();i++){
        bb+=tolower(b[i]);
    }

    if(aa==bb){
        cout<<0<<endl;
    }else if(aa<bb){
        cout<<-1<<endl;
    }else{
        cout<<1<<endl;
    }

    return 0;
}

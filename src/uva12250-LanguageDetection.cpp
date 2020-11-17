#include<iostream>
using namespace std;
int main(){
    string word;int i=1;
    while(cin>>word){
        if(word=="#")
            break;
        cout<<"Case "<<i<<": ";
        if(word=="HELLO")
            cout<<"ENGLISH"<<endl;
        else if(word=="HOLA")
            cout<<"SPANISH"<<endl;
        else if(word=="HALLO")
            cout<<"GERMAN"<<endl;
        else if(word=="BONJOUR")
            cout<<"FRENCH"<<endl;
        else if(word=="CIAO")
            cout<<"ITALIAN"<<endl;
        else if(word=="ZDRAVSTVUJTE")
            cout<<"RUSSIAN"<<endl;
        else
            cout<<"UNKNOWN"<<endl;
        i++;
    }


    return 0;
}

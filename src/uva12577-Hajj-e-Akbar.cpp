#include<iostream>
using namespace std;
int main()
{
    string nom;
    int s=0;
    while(cin>>nom)
    {
        s++;
        if(nom=="*")
            break;
        if(nom=="Hajj")
            cout<<"Case "<<s<<": Hajj-e-Akbar"<<endl;
        else if(nom=="Umrah")
            cout<<"Case "<<s<<": Hajj-e-Asghar"<<endl;
    }

    return 0;
}

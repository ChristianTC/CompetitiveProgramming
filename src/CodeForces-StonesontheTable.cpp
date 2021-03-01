#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    char s[n];
    cin>>s;
    char aux=s[0];
    int c=0;
    for(int i=1;i<n;i++){
        if(aux==s[i]){
            c++;
        }else{
            aux=s[i];
        }
    }
    cout<<c<<endl;

    return 0;
}

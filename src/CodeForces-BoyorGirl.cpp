#include<iostream>

using namespace std;

int main(){

    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            continue;
        }
        for(int j=i;j<s.size();j++){
            if(i==j) continue;
            if(s[i]==s[j]) s[j]=' ';
        }
        c++;
    }
    if(c%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }

    return 0;
}


#include<iostream>

using namespace std;

int main(){
    int s,a,b,c;
    while(cin>>s>>a>>b>>c)
    {
        if(s==0 && a==0 && b==0 && c==0)
            break;
        int res = 1080+((s-a+40)%40+(b-a+40)%40+(b-c+40)%40)*9;
        cout<<res<<endl;
    }
    return 0;
}

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string word;
    cin>>word;
    int sizeWord = word.length();
    int cLower=0;
    int cUpper=0;
    for(int i=0; i<word.length(); i++){
        if(word[i]<96){
            cUpper++;
        }else{
            cLower++;
        }
    };

    if(cUpper > cLower){
         for(int i=0; i<word.length(); i++){
            word[i]=toupper(word[i]);
        }
    }else{
        for(int i=0; i<word.length(); i++){
            word[i]=tolower(word[i]);
        }
    }
    cout<<word<<endl;


    return 0;
}

#include<iostream>

using namespace std;

int main(){

    int matrix[5][5];
    int vrow,vcol;

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>matrix[i][j];
            if(matrix[i][j]==1){
                vrow=i;vcol=j;
            }
        }
    }

    int cont=abs(vrow-2)+abs(vcol-2);
    cout<<cont<<endl;
    return 0;
}

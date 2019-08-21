#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        vector<int> street;
        int p;
        for(int j=0;j<m;j++)
        {
            cin>>p;
            street.push_back(p);
        }
        vector<int>::iterator maximo;
        maximo=max_element(street.begin(),street.end());
        vector<int>::iterator minimo;
        minimo=min_element(street.begin(),street.end());
        cout<<(maximo[0]-minimo[0])*2<<endl;
    }

    return 0;
}

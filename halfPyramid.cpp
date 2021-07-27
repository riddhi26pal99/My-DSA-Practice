#include<iostream>

using namespace std;

int main (){

    int num;
    cin>>num;

    for (int i = num; i>=1; i--){
        for(int j = 1; j<=num; j++){
            if(j<=i-1) cout<<" ";
            else cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}
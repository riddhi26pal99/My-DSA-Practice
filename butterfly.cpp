#include<iostream>

using namespace std;

int main (){

    int num;
    cin>>num;

   for( int i = 1; i<=num; i++){
       for(int j = 1; j<=i; j++){
           cout<<"*";
       }
       int space = 2*num - 2*i;
       for(int j=1; j<=space; j++){
           cout<<" ";
       }
       for (int j = 1; j<=1; j++){
           cout<<"*";
       }
       cout<<endl;
   }

    for( int i = num; i>=1; i--){
       for(int j = 1; j<=i; j++){
           cout<<"*";
       }
       int space = 2*num - 2*i;
       for(int j=1; j<=space; j++){
           cout<<" ";
       }
       for (int j = 1; j<=1; j++){
           cout<<"*";
       }
       cout<<endl;
   }
   
    return 0;
}
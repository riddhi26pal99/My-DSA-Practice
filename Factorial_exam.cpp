#include<iostream>

using namespace std;

int main(){
    int num;
    cout<<"enter the number:";
    cin>>num;

    int fact = 1 ;
    for (int i = num; i>0; i--){
        
        fact *= i;
    }
    cout<<"the factorial is:"<<fact;

    return 0;
}
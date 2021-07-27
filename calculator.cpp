#include <iostream>

using namespace std;

int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int a,b;
    cin>>a>>b;

    char calc;
    cout<<"Calculate What Anna:"<<endl;
    cin>> calc;

    switch(calc)
    {
        case 'a': 
            cout<< (a+b) << endl;
            break;
        case 'b': 
            cout<< (a-b) << endl;
            break;
        case 'c': 
            cout<< (a*b) << endl;
            break;
        case 'd': 
            cout<< (a/b) << endl;
            break;
        case 'e': 
            cout<< (a%b) << endl;
            break;
        default: 
        cout<<"somebody Give this man a calculator"<<endl;
    }
    return 0;
}
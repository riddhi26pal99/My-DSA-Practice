#include <iostream>

using namespace std;

int main(){

    int a,b;
    cin>>a>>b;

    // i row
    // j column
    /*
    1*****
    2*   *
    3*   *
    4*   *
    5*****
    */
   int i, j; 

    for ( i = 1 ; i <= a; i++ ){
        for ( j = 1; i <= b; j++){
            if( i == 1 || i == a || j == 1 || j == b ){
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}
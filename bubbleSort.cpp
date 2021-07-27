#include<iostream>

using namespace std;

int main(){

    int num;
    cout<<"Enter the lenght of array:";
    cin>>num;

    cout<<"Enter the elements of the array of "<<num<<" length:";
    int arr[num];
    for(int i = 0; i<num; i++){
        cin>>arr[i];
    }

    int counter = 1;
    while( counter < num -1 ){
    for(int i = 0; i< num-counter; i++){
        if( arr[i] > arr[i+1] ){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter ++;
    }
    cout<<"The sorted array is:";
    for(int i = 0; i<num; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
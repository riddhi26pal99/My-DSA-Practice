#include<iostream>

using namespace std;

int main(){
    string num;

    cin>>num;

    int ans = 0, x=1;

    int s = num.size();

    for(int i = s-1; i>=0; i--){
        if(num[i] >= '0' && num[i] <= '9'){
            ans += x*(num[i]-'0');
        }

        if(num[i] >= 'A' && num[i] <= 'F'){
            ans += x*(num[i] - 'A' + 10);
        }

        x *= 16;

    }

    cout<<ans;

    return 0;
}
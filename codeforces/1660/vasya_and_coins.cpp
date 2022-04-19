#include<iostream>

using namespace std;


int main(){
    int t;

    cin >> t;

    for(int z=0; z<t; z++){
        int a, b;

        cin>>a>>b;

        if(a == 0){
            cout<<1<<endl;
        }
        else{
            cout<<a+2*b+1<<endl;
        }
    }
}
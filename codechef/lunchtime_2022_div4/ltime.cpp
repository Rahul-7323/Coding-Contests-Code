#include<iostream>

using namespace std;


int main(){
    
    int T, X;

    cin >> T;

    for(int i=0; i<T; i++){
        cin>>X;
        if(X >= 1 and X <= 4){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

    return 0;
}

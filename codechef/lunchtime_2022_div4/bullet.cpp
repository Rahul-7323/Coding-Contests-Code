#include<iostream>

using namespace std;

int main() {
    int T, X, Y, Z, ans;

    cin>>T;

    for(int i=0; i<T; i++){
        cin>>X>>Y>>Z;
        ans = Z - Y/X;

        if(ans > 0){
            cout<<ans;
        }
        else{
            cout<<0;
        }
        cout<<endl;
    }
    return 0;
}
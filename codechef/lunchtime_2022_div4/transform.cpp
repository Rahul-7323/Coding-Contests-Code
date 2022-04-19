#include<iostream>
#include<vector>

using namespace std;

int main() {

    int T;
    int size, n;

    cin >> T;

    // 0 - small
    // 1 - normal
    // 2 - huge

    for(int i=0; i<T; i++){
        cin >> n;
        size = (1 + n%3)%3;

        if(size == 0){
            cout<<"SMALL\n";
        }

        if(size == 1){
            cout<<"NORMAL\n";
        }

        if(size == 2){
            cout<<"HUGE\n";
        }
    }

    return 0;
}
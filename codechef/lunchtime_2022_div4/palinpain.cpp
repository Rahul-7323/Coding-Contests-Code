#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void display_vector(vector<char> arr){
    int n = arr.size();

    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
    cout<<endl;
}

int main(){

    int T; 
    cin >> T;

    for(int z=0; z<T; z++){
        int X, Y;
        cin >> X >> Y;

        if((X%2 != 0 and Y%2 != 0) or (X+Y < 4) or X == 1 or Y == 1){
            cout<<-1<<endl;
            continue;
        }

        vector<char> arr1;
        vector<char> arr2;
        bool flag;

        if(X%2 == 0){
            for(int i=0; i<Y; i++){
                arr1.push_back('b');
            }

            flag = true;

            for(int i=0; i<X; i++){
                if(flag){
                    arr1.push_back('a');
                }
                else{
                    arr1.insert(arr1.begin(), 'a');
                }
            }

            display_vector(arr1);

            int c;

            if(Y%2 == 0){
                arr2.push_back('b');
                arr2.push_back('b');
            }
        }
    }
}
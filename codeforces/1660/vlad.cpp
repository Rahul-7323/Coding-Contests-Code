#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t, num;
    cin >> t;

    for(int z=0; z<t; z++){
        int n;
        cin>>n;
        cout<<endl;
        vector<int> arr;

        for(int i=0; i<n; i++){
            cin>>num;
            arr.push_back(num);
        }
        
        if(n == 1){
            if(arr[0] > 1){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        else{
            sort(arr.begin(), arr.end());

            if(arr[n-1] - arr[n-2] > 1){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
}
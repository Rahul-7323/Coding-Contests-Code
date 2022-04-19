#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int T, N, num;

    cin >> T;

    for(int i=0; i<T; i++){
        cin>>N;
        vector<int> arr;

        for(int j=0; j<N; j++){
            cin>>num;
            arr.push_back(num);
        }

        int count = 0;
        int count1 = 0;
        int count2 = 0;
        
        for(int x = 0; x<N; x++){
            if(arr[x] == 1){
                count1++;
                count += N-1;
            }
            else if(arr[x] == 2){
                count2++;
            }
        }

        if(count1 > 1)
        count -= (count1*(count1-1))/2;

        if(count2 > 1){
            count += (count2*(count2-1))/2;
        }

        cout<<count<<endl;
    }
}

// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;

// int main() {
//     int T, N, num;

//     cin >> T;

//     for(int i=0; i<T; i++){
//         cin>>N;
//         vector<int> arr;

//         for(int j=0; j<N; j++){
//             cin>>num;
//             arr.push_back(num);
//         }

//         int count = 0;
        
//         for(int x = 0; x<N; x++){
//             for(int y = x+1; y<N; y++){
//                 if(arr[x]+arr[y] >= arr[x]*arr[y]){
//                     count++;
//                 }
//             }
//         }

//         cout<<count<<endl;
//     }
// }
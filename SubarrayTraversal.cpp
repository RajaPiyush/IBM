#include<bits/stdc++.h>
using namespace std;


void findSubArrays(vector<int> arr){
    for(int i =0; i < arr.size();i++){
        for(int j = i; j < arr.size();j++){
            for(int k =i; k <= j; k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
        
    }
}
int main(void){
    
    int n; cout<<"Enter the size of the array"<<endl;
    cin>> n;
    //input the array using for loop
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        arr.push_back(x);
    }
    cout<<endl;
    findSubArrays(arr);

    return 0;
}
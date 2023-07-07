#include<bits/stdc++.h>
using namespace std;

//write a function to sort the given two  arrays using another array 

void mergeBruteForce(vector<int>& arr1, int m, vector<int>& arr2, int n) {
    int i = 0;
    int j = 0;
    vector<int> ans;
    while(i < m && j < n){
        if(arr1[i] < arr2[j]){
            ans.push_back(arr1[i]);
            i++;
        }
        else{
            ans.push_back(arr2[j]);
            j++;
        }
    }

    while(i < m){
        ans.push_back(arr1[i]);
        i++;
    }   
    while(j < n){
        ans.push_back(arr2[j]);
        j++;
    }
    // now copy the elements of ans to arr1 and arr2 according to their sizes
    for(int i = 0; i < m; i++){
        arr1[i] = ans[i];
    }
    for(int i = m; i < m+n; i++){
        arr2[i-m] = ans[i];
    }

    //print the arrays
    cout<<"Array 1 is"<<endl;
    for(int i = 0; i < m; i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    cout<<"Array 2 is"<<endl;
    for(int i = 0; i < n; i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

}

void mergeBetter(vector<int>& arr1, int m, vector<int>& arr2, int n) {
    int left = m-1;
    int right = 0;

    while(left >= 0 && right < n){
        if(arr1[left] > arr2[right]){
            swap(arr1[left],arr2[right]);
            left--;
            right++;
        }
        else{
            break;
        }
    }

    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());

    cout<<"Array 1 is"<<endl;
    for(int i = 0; i < m; i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    cout<<"Array 2 is"<<endl;
    for(int i = 0; i < n; i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

}



int main(void){
    // input a vector 
    vector<int> arr1;
    vector<int> arr2;
    int n1,n2; cout<<"Enter the size of the first array"<<endl;
    cin>>n1;
    cout<<"Enter the size of the second array"<<endl;   
    cin>>n2;
    cout<<"Enter the elements of the first array"<<endl;
    for(int i=0;i<n1;i++){
        int x; cin>>x;
        arr1.push_back(x);
    }
    cout<<"Enter the elements of the second array"<<endl;
    for(int i=0;i<n2;i++){
        int x; cin>>x;
        arr2.push_back(x);
    }
    //mergeBruteForce(arr1,n1,arr2,n2);

    

    mergeBetter(arr1,n1,arr2,n2);

    return 0;

    // 
}
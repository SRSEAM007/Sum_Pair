#include<iostream>
#include<vector>
using namespace std;

void find_pair(vector<int>& arr, int target){
    int n = arr.size();
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<"("<< arr[i]<<"," <<arr[j]<<")";
            }
        }
    }


}

int main(){
    int target , n ;
    cout<< "Enter the size of array:";
    cin>>n;
    vector<int> arr(n);
    cout<< "Enter the elements of array:";
    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }
    cout<< "Enter the target:";
    cin>>target;
    find_pair(arr,target);
}

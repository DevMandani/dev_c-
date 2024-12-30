#include<iostream>
#include<vector>
using namespace std;


int main(){


vector<int> arr ={2,1,3,4,3,6,5,8};
vector<int> arr2;

int n=arr.size();

for(int i=1;i<n-1;i++){
    if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
        arr2.push_back(arr[i]);
    }
}

for(int ele : arr2){
    cout<<ele<<endl;
}


    return 0;
}
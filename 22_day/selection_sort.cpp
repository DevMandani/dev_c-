#include<iostream>

using namespace std;

int main(){
    
   
    
 
    int arr[5]={1,4,3,2,5};

    
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
    
    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
           if(arr[j]<arr[i]){
             int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
           }
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
    
    return 0;
}
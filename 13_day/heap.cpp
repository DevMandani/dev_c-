#include<iostream>

using namespace std;

int main(){

        int *arr;

        arr = new int[10];

        if(arr == NULL){

            cout<<"memory is failed"<<endl;
        }

        else{
            cout<<"memory allocation is successfull"<<endl;
        }

        delete[] arr;

        arr = NULL;

        if(arr==NULL){
            cout<<"memory delocation is successfull"<<endl;
        }
        else{
            cout<<"memory delocation is failed"<<endl;
        }


    return 0;
}
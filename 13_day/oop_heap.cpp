#include<iostream>
using namespace std;

 class myClass
{
    private:

     int size;
     int *arr;
     

     public:

     myClass(int size){
        this->size = size;
        arr = new int[this->size];
                    
            if(arr == NULL){
                cout << "memory allocation is failed" << endl;
            }
            else {
                cout << "memory allocation is ssuccessfull" << endl;
            }

     }

     ~myClass(){
        delete[] arr;
        arr = NULL;

            if(arr == NULL){
                cout << "memory dellocation is successfull" << endl;
            }
            else {
                cout << "memory dellocation is failed" << endl;
            }
          }

     void setElement(int index, int ele){

        if(index>=0 && index < this->size){
            arr[index] = ele;

            cout << "element added succesfully!" << endl;
        }
        else{
            cout << "error: index is out of arr size.. !" << endl;
        }

     }

      void getElement(int index){

        if(index>=0 && index < this->size){
            cout << "element of arr in dma: " << arr[index] << endl;
        }
        else{
            cout << "error: index is out of arr size.. !" << endl;
        }
     }

};

int main(){

myClass obj(5);
obj.setElement(0, 90);
obj.setElement(1, 80);
obj.setElement(2, 60);
obj.setElement(3, 50);
obj.getElement(0);
obj.getElement(1);
obj.getElement(2);
obj.getElement(3);


    return 0;
}
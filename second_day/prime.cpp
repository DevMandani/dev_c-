#include<iostream>

using namespace std;

int main(){
    int num,check=0;

    cout<<"enter your number:";
    cin>>num;

    for(int i=1;i<=num;i++){
        if(i%num==0){
            check++;
        }
    }
    if(check==2){
        cout<<"your number is prime:"<<" "<<check;

    }
    else{
        cout<<"your number is not prime";
    }



    

}





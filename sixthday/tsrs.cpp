#include<iostream>


using namespace std;


int sum(int num){

    int s=0;
    for(int i=0;i<=num;i++){
        s+=i;
    }
    return s;
}

int main(){

    int num=10;
    

    cout<<"sum is:"<<sum(num);

}
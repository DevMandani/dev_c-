#include<iostream>

using namespace std;


int main(){

    int a[4][4]={
        {21,22,23,24},
        {35,36,37,38},
        {99,10,11,12},
        {13,14,15,16}
        };

        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                cout<<a[i][j]<<" ";
            }cout<<endl;
        }


        
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                if(i==j){

                cout<<a[i][j]<<" ";
                }
                else{
                    cout<<" "<<" ";
                 }

            }cout<<endl;
        }


        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                  if(i==0 || i==4 || j==0 || j==4){

                cout<<a[i][j]<<" ";
                }
                else{
                    cout<<" "<<" ";
                 }

            }cout<<endl;
        }


        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                if(i+j==4){
                    cout<<a[i][j];
                }cout<<endl;
            }
        }


        
}
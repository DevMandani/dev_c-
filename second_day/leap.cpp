#include<iostream>

using namespace std;

int main(){


    int a[100];
    int c=0;
    int start_year;
    int end_year;

    cout<<"enter starting years:";
    cin>>start_year;

    cout<<"enter ending years:";
    cin>>end_year;

    for(int i=start_year;i<=end_year;i++){
        if(i%4==0){
         a[c]=i;
         c++;
        }
    }

for(int j=0;j<c;j++){
    cout<<a[j]<<endl;
}



    return 0;
}
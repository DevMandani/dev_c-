#include<iostream>


using namespace std;

int main(){


    int salary,HRA,DA,TA,totalsalary;

    cout<<"enter salary";
    cin>>salary;

    cout<<"enter HRA"<<endl;
    cin>>HRA;
    HRA=HRA*salary/100;
    cout<<"the HRA is:"<<HRA<<endl;
    
    cout<<"enter your DA:";
    cin>>DA;
    DA=DA*salary/100;
    cout<<"the DA is:"<<DA<<endl;

cout<<"enter TA:";
cin>>TA;
    TA=TA*salary/100;
    cout<<"the TA is:"<<TA<<endl;


totalsalary=salary-HRA-DA-TA;

cout<<"the total salary is:"<<totalsalary;
    return 0;
}
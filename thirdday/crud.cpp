#include<iostream>


using namespace std;

int main(){

    int size;

    cout<<"enter array of size:";
    cin>>size;
    int a[size];
   for(int i=0;i<=size;i++){
         cout<<"a["<<i<<"]";
        cin>>a[i];
       
    }


    int choice;

    cout<<"press 1 is for display:"<<endl;

    cout<<"press 2 is for updation"<<endl;

    cout<<"press 3 is for deletion"<<endl;

    cout<<"press 4 is for insertion"<<endl;

    cout<<"enter choice:"<<endl;
    cin>>choice;

    switch(choice){
        case 1:

 for(int i=0;i<=size;i++){
         cout<<a[i];
       
       
    }

        break;

        
    case 2:

        cout<<"upadation proccess:";
        int update_pos;
        int update_ele;

        cout<<"enter update position:";
        cin>>update_pos;
        cout<<"enter element:";
        cin>>update_ele;

        a[update_pos]=update_ele;

        for(int i=0;i<=size;i++){
              cout<<" "<<a[i];
        }

    break;

    case 3:

    int delete_pos;
    cout<<"enter delete position:";
    cin>>delete_pos;

    for(int i=delete_pos;i<=size;i++){
        a[i]=a[i+1];
    }
    for(int i=0;i<=size-1;i++){
        cout<<" "<<a[i];
    }
  


    break;
   

    case 4:

    int insertion_element,insertion_position;
    cout<<"enter insertion position:";
    cin>>insertion_position;

    cout<<"enter insertion element:";
    cin>>insertion_element;


    for(int i=size;i>insertion_element;i--){
        a[i]=a[i-1];
    }
    size++;
    a[insertion_element] = insertion_position;
    

       for(int i=0;i<=size;i++){
        cout<<" "<<a[i];
    }

   


    break;
   

   default:

   

}
}
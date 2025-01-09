#include<iostream>
using namespace std;

class Queue
{
    private:
    int capacity;
     int *arr;
     int size;
     int front;
     int rear;


    public:

    Queue(int capacity){
        this->capacity = capacity;
        arr = new int[capacity];
        size = 0;
        front = -1;
        rear = -1;
    }

    ~Queue(){
        delete[] arr;
    }
   
    
    void enquee(int ele){
        if(this->front ==-1 && this->rear ==-1){
            this->front=0;
            this->rear=0;
            this->arr[this->rear] = ele;
            size++;

        }
        else if(size == this->capacity){
                cout<<"queue is overflow";

        }
        else{
            this->rear++;
         this->arr[this->rear] = ele;
           size++;
        }
    }



    void dequeue(){
        if(this->front==-1 && this->rear==-1){
            cout<<"queue is empty...!"<<endl;
        }
        else if(this->front== this->rear){
            this->front=-1;
            this->rear=-1;
            size--;

        }
        else{
            this->front++;
            this->arr[this->front] ;

            size--;
            
        }
    }


void Front(){
       if(this->front==-1 && this->rear==-1){
            cout<<"queue is empty...!"<<endl;
        }
        else{
            cout<<this->arr[this->front]<<endl;
        }
}

void Rear(){
       if(this->front==-1 && this->rear==-1){
            cout<<"queue is empty...!"<<endl;
        }
        else{
            cout<<this->arr[this->rear]<<endl;
        }
}


void Empty(){
    if(this->front==-1 && this->rear==-1){
        cout<<"Queue is empty...!"<<endl;
    }
    else{
        cout<<"Queue is not empty..!"<<endl;
    }
}


void Full(){
    if(size== this->capacity){
        cout<<"queue is Full..!"<<endl;
    }
    else{
        cout<<"queue is not full..!"<<endl;
    }
}

void Size(){
    cout<<"size is"<<size<<endl;
}

  

    void display(){
        if(this->front==-1 && this->rear==-1){
            cout<<"queue is empty"<<endl;
        }
        else{
            for(int i=this->front; i<=this->rear; i++){
                cout<<this->arr[i]<< " ";
            }
            cout<<endl;
        }
    }

};




int main(){
int capacity;
    cout << "enter capcity: ";
cin >> capacity;

Queue Queue(capacity);


int choice, ele;

do{
    cout << " press 1 for enqueue" << endl;
    cout << " press 2 for dequeue" << endl;
    cout << " press 3 for front" << endl;
    cout << " press 4 for rear" << endl;
    cout << " press 5 for is empty" << endl;
    cout << " press 6 for is full" << endl;
    cout << " press 7 for size" << endl;
    cout<<"press 8 for display"<<endl;
    cout << " press 0 for exit" << endl;

    cout << "choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    cout << "ele: ";
    cin >> ele;
     Queue.enquee(ele);
        break;
    
    case 2:
        Queue.dequeue();
        break;
    
    case 3:
            Queue.Front();
        break;
    
    case 4:
        Queue.Rear();
        break;
    
    case 5:
            Queue.Empty();
        break;
    
    case 6:
        Queue.Full();
        break;

    case 7:
      Queue.Size();
        break;
        
        
     case 8:
        Queue.display();
        break;
    
    default:
        cout << "enter valid choice " << endl;
        break;
    }

}
while(choice != 0);
    return 0;
}
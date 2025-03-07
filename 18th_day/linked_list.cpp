#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList
{
    public:
    Node *head;

    LinkedList(){
        this->head = NULL;
    };

    void insertStart(int data){
        Node *newNode = new Node(data);
        newNode->next = this->head;
        this->head = newNode;
        viewAll();
    };


    void insertEnd( int data){
        Node *newNode = new Node(data);
        if(this->head == NULL){
            newNode->next = head;
            this->head = newNode;
        }
        else{
            Node *ptr = this->head;
            while(ptr->next != NULL){
                ptr = ptr->next;
            }
            ptr->next = newNode;
        }
        viewAll();
    };

    void insertAtPos( int data, int pos){
        Node *newNode = new Node(data);
       if(pos == 0){
            newNode->next = head;
            this->head = newNode;
       }
       else
       {
        Node *ptr = this->head;
        for(int i=0; i<pos-1; i++){
                ptr = ptr->next;
        }
        newNode->next = ptr->next;
         ptr->next = newNode; 
         viewAll();
    }
    }




    void update(int pos,int data){
        Node *ptr=this->head;

        for(int i=0;i<pos;i++){
            ptr=ptr->next;
        }
        ptr->data=data;
        viewAll();
    }

    void deletestart(){
        Node *ptr=this->head;

        this->head=head->next;
        delete ptr;
        ptr=NULL;
        viewAll();
    }

    void deleteend(){
        Node *ptr=this->head;

        while(ptr->next->next != NULL){
            ptr=ptr->next;
        }
        delete ptr->next;
        ptr->next=NULL;
        ptr=NULL;
        delete ptr;

        viewAll();
    }
  void delPos(int pos){

        Node *prev = this->head;
        Node *ptr = this->head;

        for(int i=0; i<pos-1; i++){
            prev = prev->next;
        }

        for(int i=0; i<pos; i++){
            ptr = ptr->next;
        }

        prev->next = ptr->next;
        delete ptr;
        ptr=NULL;
        prev = NULL;

      viewAll();
    }


    void viewAll()

    void viewAll(){
        Node *ptr = this->head;
        while(ptr != NULL){
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl;
        
    }

};

int main(){

LinkedList list;

int choice, ele, pos;

do{
    cout << " press 1 for Insert at Start" << endl;
    cout << " press 2 for Insert at end" << endl;
    cout << " press 3 for Insert at positon" << endl;
    cout << " press 4 for update all ele" << endl;
    cout << " press 5 for delete at start  ele" << endl;
    cout << " press 6 for delete at end ele" << endl;
    cout << " press 7 for delete at pos ele" << endl;
    cout << " press 8 for view all ele" << endl;
    cout << " press 0 for exit" << endl;

    cout << "choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "ele: ";
        cin >> ele;
        list.insertStart(ele);
        cout << "instred start successfull...!" << endl; 
        break;
    
    case 2:
     cout << "ele: ";
        cin >>ele;
        list.insertEnd(ele);
           cout << "instred end successfull...!" << endl; 
        break;
    
    case 3:
        cout << "pos: ";
        cin >> pos;
     cout << "ele: ";
        cin >> ele;
        list.insertAtPos(ele, pos);
           cout << "instred pos successfull...!" << endl; 
        break;
    

        case 4:

            cout<<"enter pos:";
            cin>>pos;
            cout<<"enter ele";
            cin>>ele;
            list.update(pos,ele);
            break;

            case 5:
            list.deletestart();
            break;

            case 6:
                list.deleteend();
                break;

                case 7:
                cout<<"enter position:";
                cin>>pos;
                cout<<"enter element:";
                cin>>ele;

                list.deletepos();
                break;

    case 8:
        list.viewAll();
        break;
    
    default:
        cout << "enter valid choice " << endl;
        break;
    }

}
while(choice != 0);


    return 0;
}
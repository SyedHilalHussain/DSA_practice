#include <iostream>
#include <iomanip>
using namespace std;

class queue1{
     public:
    int queue[5];
    int front=-1;
    int rear=-1;
    int n=5;
   
    
    bool isempty(){
        if(front==-1 && rear==-1){
            return true;
        }else{
            return false;
        }
    }
    bool isfull(){
        if((rear+1)%n==front){
            return true;
        }else{
            return false;
        }
    }
    void enqueue(int item){
        if(isfull()){
            cout<<"Queue Overflow"<<endl;
        }else if(isempty()){
            front=0;
            rear=0;
            queue[rear]=item;
        }else{
            rear=(rear+1)%n;
            queue[rear]=item;
        }
    }
     void dequeue(){
        if(isempty()){
            cout<<"Queue Underflow"<<endl;
        }else if(rear==front){
            front=-1;
            rear=-1;
            }else{
           front=(front+1)%n;
        }
    }
    void traversequeu(){
    if(rear>front){
        for (int i =front; i <rear+1; i++)
        {
            // cout<<front<<" ";
            cout<<i<<queue[i]<<" ";
        }
       cout<<endl; 
    }
    else if(rear==-1 && front==-1){
        cout<<"EMPTY\n";
    }
    
    else{
        for (int i = rear; i < front+1; i++)
        {
            
            cout<<front<<" ";
        //    cout<<i<<queue[i]<<" ";
        }
        cout<<endl;
        
    }
}

};

int main()
{
    queue1 q1;
    q1.traversequeu();
    q1.enqueue(1);
    q1.traversequeu();
    q1.enqueue(2);
    q1.traversequeu();
    q1.enqueue(3); 
    q1.traversequeu();
    q1.enqueue(4);
    q1.dequeue();
    q1.traversequeu();
    q1.enqueue(5);
    q1.traversequeu();
    q1.enqueue(6);
    q1.dequeue();
    q1.traversequeu();

return 0;
}

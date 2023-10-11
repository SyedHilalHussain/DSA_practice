#include <iostream>
#include <iomanip>
using namespace std;
int queue[5];
int front = -1;
int rear = -1;
int n = 5;
void traversequeu()
{

//    Function to display status of Circular Queue
    int i;
    if (rear == -1 && front == -1)
    {
        cout << endl
             << "Empty Queue" << endl;
    }
    else
    {
        // cout << "Front -> " << front;
        cout << endl
             << "Items -> ";
        for (i = front; i != rear; i = (i + 1) % n){
            cout << queue[i];}
            cout <<" "<<i<<" "<<queue[i];
        // cout << endl
        //      << "Rear -> " << rear;
    }

    // if(front>rear){
    //     cout<<"f1-"<<front<<endl;
    //     for (int i =front; i <n; i++)
    //     {
    //         cout<<queue[i]<<" ";
    //     }
    //      for (int j =0; j<=rear; j++)
    //     {
    //         cout<<queue[j]<<" ";
    //     }
    //    cout<<endl;
    // }else if(rear==-1 && front==-1){
    //     cout<<"EMPTY\n";
    // }

    // else{
    //     cout<<"f="<<front<<endl;
    //     for (int i = front; i <=rear; i++)
    //     {
    //        cout<<queue[i]<<" ";
    //     }
    //     cout<<endl;

    // }
}
void enqueue(int item)
{
    // if((front==0 && rear==n-1)||(front==rear+1))

    if ((front == 0 && rear == n - 1) || (front == rear + 1))
    {
        cout << "Queue Overflow";
        return;
    }
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else if (rear == n - 1)
    {
        rear = 0;
    }
    else
    {
        rear = rear + 1;
    }
    queue[rear] = item;
    traversequeu();
    return;
}
void dequeue()
{
    if (front == -1)
    {
        cout << "Queue Underflow";
        return;
    }

    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (front == n - 1)
    {
        front = 0;
    }
    else
    {
        front++;
    }
    traversequeu();
}

int main()
{

    enqueue(12);
    enqueue(13);
    enqueue(14);
    dequeue();
    enqueue(15);
    enqueue(16);
    dequeue();

    enqueue(17);
    dequeue();

    return 0;
}

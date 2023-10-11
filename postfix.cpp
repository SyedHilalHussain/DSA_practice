// #include <iostream>
// #include <iomanip>
// #include <stack>
// #include <cmath>
// using namespace std;

// int postfix1(string postfix,stack<string> s){

    
    
//     postfix += ")";
//     for(int i=0; char(postfix[i])!=')'; i++){
//         string str;
//         if (isdigit(postfix[i]) && postfix[i+1] == ',')
//         {
//             s.push(str += (postfix[i]));
            
//         }
//         else if (isdigit(postfix[i]) && postfix[i+1] != ',')
//         {
//             s.push(str = str + postfix[i] + postfix[i+1]);
//             i++;
           
//         }

//         if (postfix[i]=='+' )
//         {
//             int a=stoi(s.top());
//             s.pop();
//             int b=stoi(s.top());
//             s.pop();
//             int c= b+a;
            
//             s.push(to_string(c));
            
//         }
//         else  if (postfix[i]=='^' )
//         {
//             int a=stoi(s.top());
//             s.pop();
//             int b=stoi(s.top());
//             s.pop();
//             int c= pow(b,a);
            
//             s.push(to_string(c));
            
//         }
//         else  if (postfix[i]=='-' )
//         {
//             int a=stoi(s.top());
//             s.pop();
//             int b=stoi(s.top());
//             s.pop();
//             int c= b-a;
            
//             s.push(to_string(c));
            
//         }
//          else if (postfix[i]=='*' )
//         {
//             int a=stoi(s.top());
//             s.pop();
//             int b=stoi(s.top());
//             s.pop();
//             int c= b*a;
            
//             s.push(to_string(c));
            
//         }
//         else  if (postfix[i]=='/' )
//         {
//             int a=stoi(s.top());
//             s.pop();
//             int b=stoi(s.top());
//             s.pop();
//             int c= b/a;
            
//             s.push(to_string(c)); 
            
//         }
        
        
//     }
//     int value = stoi(s.top());
//     return value;
// }

// int main()
// {
//     stack<string> s;
// string p1 = "5,6,2,+,*,12,4,/,-";
// cout << "Answer of " << p1 << endl;
// int a=postfix1(p1,s);
// cout<<a;



// return 0;

// }
#include <iostream>
using namespace std;
int queue[4];
int front=-1;
int rear =-1;

int n=4;
void traversequeue(){
	if(rear>front){
	
		for (int i =front;i<rear+1;i++){
			cout<<queue[i]<<"  ";
		}
		cout<<endl;}
	else if(rear==-1 && front ==-1){
		cout<<"Empty\n";}
	else{
		for (int i =rear;i<front+1;i++){
			cout<<queue[i]<<"  ";
		}
		cout<<endl;
	}
}
void enqueue(int item){
	if ((front ==0 && rear==n-1)||(front ==rear+1)){
	
		cout<<"queue overflow\n";
		return;}
	if(front==-1){
		front=0;
		rear=0;
		
	}
	else if (rear==n-1){
		rear=0;
	}
	else{
	
	
		rear+=1;}
	queue[rear]=item;
	traversequeue();
	return;
}
void dequeue(){
	if(front==-1){
		cout<<"queue khaali hai chalain aagay barhain";
		return;
	}

	if(front==rear){
		front=-1;
		rear=-1;
	}
	else if(front==n-1){
		front=0;
	}
	else{
		front++;
		
	}
	traversequeue();
	return;
}
int main(){
	enqueue(21044);
	enqueue(21045);
	enqueue(21101);
	enqueue(9);
    enqueue(9);
	dequeue();
	dequeue();
	dequeue();
	dequeue();
    dequeue();
	return 0;
}
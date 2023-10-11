#include <iostream>
#include <iomanip>
using namespace std;

void push(int s[] ,int &top,int max,int item){
if(top==max-1){
   cout<<"stack overflow"<<endl;
   return;
}else{
   top++;
   s[top]=item;
   return;
}

}
void pop(int s[],int &top){
   if(top==-1){
      cout<<"stack underflow"<<endl;
   }else{
      top--;
      return;
   }
}

void display(int &top, int s[]){
   if(top==-1){
      cout<<"stack underflow"<<endl;
   }else{
      for(int i=0; i<=top; i++){
         cout<<s[i]<<" ";
      }
      cout<<endl;
   }
}






// #include <iostream>
// #include <iomanip>
// #include <stack>
// using namespace std;
// void push(int stack[],int item,int &top,int max){
//     if(top== max-1){
//         cout<<"overflow\n";
//         return;
//     }
//     top++;
//     stack[top]=item;
    
//     return ;
// }
// void pop(int stack[], int &top){
//     if(top==-1){
//         cout<<"stack underflow\n";
//         return;
//     }
//     // item==stack<top>;
//     top--;
//     return;
// }
// void display(int &top,int stack[]) {
//    if(top>=0) {
//       for(int i = top; i >= 0; i--){
//         cout<<stack[i]<<" ";
//       }
//       cout<<endl;
//    } else
//    cout<<"Stack is empty";
// }
int main()
{
    int value,item;
  int top=-1;  
 int a[3];
 int max=sizeof(a)/sizeof(0);
 
cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
 while(value!=4){
      cout<<"Enter choice: "<<endl;
      cin>>value;
      switch(value) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>item;
            push(a,top,max,item);
            break;
         }
         case 2: {
            pop(a,top);
            break;
         }
         case 3: {
            display(top,a);
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }
   

return 0;
}

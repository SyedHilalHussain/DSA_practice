#include <iostream>
#include <iomanip>
using namespace std;

 int stk[6];
  int stk1top=-1;
  int stk2top=-1;
  int max1=sizeof(stk)/sizeof(stk[0]);
  int stk1size=(sizeof(stk)/sizeof(stk[0]))/2;
  int stk2size=(sizeof(stk)/sizeof(stk[0]))/2; 

void push_a(int arr[],int item, int stk1size, int &stk1top,int &stk2top){
    if(stk1top==stk1size-1){
        cout<<"stack A is overflow"<<endl;
        return;
    }
    else{
        stk1top++;
        arr[stk1top]=item;
        return;
    }


}
void push_b(int arr[],int item, int stk2size, int &stk1top,int &stk2top,int max){
    if(stk2top==stk2size){
        cout<<"stack b is overflow"<<endl;
        return;
    }
    else{
        if(stk2top==-1){
            stk2top=max-1;
        arr[stk2top]=item;
        
    
   
        
        }else{
            stk2top=stk2top-1;
            arr[stk2top]=item;
            
        }
       
      return;  
    }


}
void pop_a(int arr[],int &top_a ){
    if(top_a==-1){
        cout<<"stack a Underflow"<<endl;
        return;
    }else{
        top_a--;
        return;
    }
}
void pop_b(int arr[],int &top_b ){
    if(top_b>=max1){
         cout<<"stack b Underflow"<<endl;
        return;
    }else{
        top_b++;
        return;
    }
}
void display_a(){
    for (int i = stk1top; i>=0; i-- )
    {
       cout<<stk[i]<<" ";
       
    }
    cout<<endl;
    

}
void display_b(){
    for (int i = stk2top; i < max1; i++)
    {
       cout<<stk[i]<<" ";
        
    }
    cout<<endl;
    

}

int main()
{
   
  cout<<"1) Push in stack A" <<endl;
  cout<<"2) Push in stack B"<<endl;
  cout<<"3) POP From stack A"<<endl;
  cout<<"4) POP From stack B"<<endl;
  cout<<"5) Display stack A"<<endl;
  cout<<"6) Display stack B"<<endl;
  cout<<"7) EXIT"<<endl;
  int choice;
  while(choice!=7){
cout<<"Enter choice: "<<endl;
  cin>>choice;
  switch (choice)
  {
  case 1:
    cout<<"Enter item to push in A"<<endl;
    int item;
    cin>>item;
    push_a( stk, item, stk1size, stk1top, stk2top);
    break;
    case 2:
    cout<<"Enter item to push in B"<<endl;
    int item1;
    cin>>item1;
    push_b(stk, item1,  stk2size,  stk1top, stk2top, max1);
    break;
    case 3:
    pop_a(stk, stk1top);
    break;
    case 4:
   pop_b( stk,stk2top);
    break;
    case 5:
   
    display_a();
    break;
    case 6:
    display_b();
    break;
     case 7:
    
    break;
  
  default:
  cout<<"invalid input";
    break;
  }};
return 0;
}

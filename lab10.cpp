
///   question 3//////
#include <iostream>

#include <iomanip>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;
};
node* addnode(int item){
    node* addnode=new node();
    addnode->data=item;
    addnode->left=0;
    addnode->right=0;
    return addnode;
}


node* insert(node* root,int data){
    if(root==0){
        root=addnode(data);
        return root;
    }
    else if(data>root->data){
         root->right=insert(root->right,data);
       
    }else
    {
         root->left=insert(root->left,data);
    }
    return root;

    
}
void mirror(node* root) 
{ 
	if (root == NULL) 
		return; 
	else
	{ 
		struct node* temp; 
		
		/* do the subtrees */
		mirror(root->left); 
		mirror(root->right); 
	
		/* swap the pointers in this node */
		temp	 =root->left; 
		root->left=root->right; 
		root->right = temp; 
	} 
} 
void preorder(struct node* root){
    if(root==0){
      
        return;
    }
    
    cout<<root->data<<" ";

    preorder(root->left);
    preorder(root->right);

}
// void inorder(struct node* root){
//     if(root==0){
      
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
    
//     inorder(root->right);

// }
// void postorder(struct node* root){
//     if(root==0){
      
//         return;
//     }
    
   
//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->data<<" ";
// }


int main()
{
    struct node* root=0;
    root=insert(root,15);
    root=insert(root,10);
    root=insert(root,20);
    root=insert(root,25);
    root=insert(root,8);
    root=insert(root,12);
    root=insert(root,17);
    root=insert(root,19);
  
 cout<<"Preorder traversal : ";
    preorder(root);
    cout<<endl;
 cout<<"Its mirror ->  ";
    mirror(root);
    preorder(root);
    cout<<endl;
// cout<<"Inorder traversal : ";
//     inorder(root);
// cout<<endl;
// cout<<"Postorder traversal : ";
//     postorder(root);
//     cout<<endl;
return 0;
}

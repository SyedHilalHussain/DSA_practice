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
    }
    else if(data<root->data){
        root->left=insert(root->left,data);
    }else
    {
        root->right=insert(root->right,data);
    }
    return root;

    
}
void preorder(struct node* root){
    if(root==0){
      
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}


int main()
{
    struct node* root=0;
    root=insert(root,1);
    root=insert(root,2);
    root=insert(root,3);
    root=insert(root,4);
    root=insert(root,5);
    root=insert(root,6);
    root=insert(root,7);
    preorder(root);
return 0;
}

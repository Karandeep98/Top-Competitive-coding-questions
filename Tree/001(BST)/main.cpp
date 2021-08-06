#include <iostream>
using namespace std;

struct node{
    int key;
    struct node* left,*right;
};
 node* newnode(int item){
    struct node* temp = new node();
    temp->key=item;
    temp->left=temp->right=NULL;
    return temp;
}

node* insert(node* root,int value){
    if(root==NULL){
        return newnode(value);
    }
    if(value<root->key)
        root->left = insert(root->left,value);
    else if(value>root->key)
        root->right = insert(root->right,value);
    return root;

}
void inorder(node* root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}
void preorder(node* root){
    if(root!=NULL){
        cout<<root->key<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(node* root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->key<<" ";
    }
}
int main()
{
    struct node* root = NULL;
    root=insert(root,50);
    insert(root,30);
    insert(root,20);
    insert(root,60);
    insert(root,100);
    insert(root,55);
    insert(root,45);
    insert(root,15);

    cout<<"Inorder: ";
    inorder(root);
    cout<<"\nPreorder: ";
    preorder(root);
    cout<<"\nPostorder: ";
    postorder(root);
    return 0;
}

#include <iostream>
#include<queue>
using namespace std;
typedef int Elem;

class Node{
private:
    Elem data;
    Node* left;
    Node* right;
public:
    Node(Elem x){
        data = x;
        left=NULL;
        right = NULL;
    }
    friend class binarytree;
};
class binarytree{
private:
Node* root;
public:
binarytree(){
    root=NULL;
}
void create();
void Preorder();
void Postorder();
void Inorder();
void Levelorder();
protected:
void preorder(Node* _root);
void postorder(Node* _root);
void inorder(Node* _root);
};
void binarytree::create(){
Elem newelem;
queue<Node*> q;
int dec;
cout<<"\nEnter the root element: ";
cin>>newelem;
Node* temp =new Node(newelem);
root = temp;
q.push(temp);
while(q.empty()!=true){
    Node* temp2 = q.front();
    q.pop();
    cout<<"\nDoes the left child exist (0/1): ";
    cin>>dec;
    if(dec){
        cout<<"Enter the left child element: ";
        cin>>newelem;
        Node* temp = new Node(newelem);
        q.push(temp);
        temp2->left = temp;
    }
     cout<<"\nDoes the right child exist (0/1): ";
    cin>>dec;
    if(dec){
        cout<<"Enter the right child element: ";
        cin>>newelem;
        Node* temp = new Node(newelem);
        q.push(temp);
        temp2->right = temp;
    }
}
}
void binarytree::preorder(Node* _root){
if(_root){
    cout<<_root->data<<" ";
    preorder(_root->left);
    preorder(_root->right);
}
}
void binarytree::inorder(Node* _root){
if(_root){
    inorder(_root->left);
    cout<<_root->data<<" ";
    inorder(_root->right);
}
}
void binarytree::postorder(Node* _root){
if(_root){
    postorder(_root->left);
    postorder(_root->right);
    cout<<_root->data<<" ";
}
}
void binarytree::Preorder(){
preorder(root);
cout<<endl;
}
void binarytree::Inorder(){
inorder(root);
cout<<endl;
}
void binarytree::Postorder(){
postorder(root);
cout<<endl;
}
void binarytree::Levelorder(){
queue<Node*> q;
q.push(root);
while(q.empty()!=true){
    Node* temp = q.front();
    q.pop();
    cout<<temp->data<<" ";
    if(temp->left!=NULL){
        q.push(temp->left);
    }
    if(temp->left!=NULL){
        q.push(temp->right);
    }
}
cout<<endl;
}

int main(){
    binarytree b;
    b.create();
    b.Levelorder();
    return 0;

}

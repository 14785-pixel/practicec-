#include <iostream>

using namespace std;
class Node{
public:
int data;
Node *prev,*next;
};
class Doublelist{
 public:
 Node* header;
 Node* trailer;
 Doublelist();
 void insert(Node* v,int x);
 void Remove(Node* v);
 void addFront(int x);
 void addBack(int x);
 void removeFront();
 void removeBack();
 void display();
 void displayrev();
};
Doublelist::Doublelist(){
    header= new Node;
    trailer=new Node;
    header->next=trailer;
    trailer->prev=header;
}
void Doublelist::insert(Node *v,int x){
    Node *temp = new Node;
    temp->data=x;
    temp->next=v;
    temp->prev=v->prev;
    temp->prev->next=temp;
    v->prev=temp;
}
void Doublelist::Remove(Node* v){
    Node* temp = v;
    temp->prev->next=v->next;
    v->next->prev = temp->prev;
    delete temp;
}
void Doublelist::addFront(int x){
    insert(header->next,x);
}
void Doublelist::addBack(int x){
    insert(trailer,x);
}
void Doublelist::removeFront(){
    Remove(header->next);
}
void Doublelist::removeBack(){
    Remove(trailer->prev);
}
void Doublelist::display(){
    Node* temp = header->next;
    while(temp!=trailer){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void Doublelist::displayrev(){
    Node* temp = trailer->prev;
    while(temp!=header){
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
    cout<<endl;
}
int main()
{
 Doublelist  d;
int a[]={6,5,4,15,17,18,19,14};
for(int x:a){
    d.addBack(x);
}
d.display();
d.displayrev();
   
   return 0;
}

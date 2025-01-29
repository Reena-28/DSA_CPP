#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
void insertTail(Node* &head, int val){
Node* n=new Node(val);
if (head==NULL){
    head=n;
    return;
}
Node* temp=head;
while(temp->next!=NULL){
    temp=temp->next;
}
temp->next=n;
}
void insertAtHead(Node* &head, int val){
    Node*n=new Node(val);
    n->next=head;
    head=n;
}
void display(Node* head){
Node* temp=head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}
cout<<"NULL"<<endl;
}
bool search(Node* head, int key){
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        return false;
    }
}
void deletion(Node*head, int val){
    Node* temp=head;
    if(head==NULL) return;
    while (temp->next->data!=val){
        temp=temp->next;
    }
    Node* del=temp->next;
    temp->next=temp->next->next;
    delete del;
}
void delAtHead(Node* &head){
    Node* temp=head;
    head=head->next;
    delete temp;
}
void reverseLinkedList(Node* head){
    Node* prev=NULL;
    Node* current=head;
    Node* next=current->next;
    while(current!=NULL){
        prev->next=current;
        current->next=next;
    }

}

int main(){
Node* head=NULL; 
insertAtHead(head,1);
insertAtHead(head,2);
display(head);
search(head,8);
deletion(head,2);
display(head);


}
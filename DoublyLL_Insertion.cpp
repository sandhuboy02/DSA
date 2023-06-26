#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node *prev;
   
};
Node *newNode(int data){
    Node *new_node=new Node;
    new_node->data= data;
    new_node->next=NULL;
    new_node->prev=NULL;
    return new_node;
}
void insertAtBeginning(Node **head, int data){
    Node *new_node= newNode(data);
    new_node->next=*head;
    if(*head!=NULL)
        (*head)->prev= new_node;
    *head=new_node;
    
}
void printList(Node *head){
    Node *temp=head;
    while (temp!=NULL){
        cout<< temp->data << " ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node *head=NULL;

    insertAtBeginning(&head,10);
    insertAtBeginning(&head,20);
    insertAtBeginning(&head,30);

    printList (head);
    return 0;
}


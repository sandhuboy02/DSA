#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

int main(){
    Node* head;
    Node* one= NULL;
    Node* two= NULL;
    Node* three= NULL;

    //allocate 3 nodes in heap
    one=new Node();
    two=new Node();
    three= new Node();

    //asssign data values
    one->data= 1;
    two->data= 2;
    three->data= 3;

    //connect nodes
    one->next= two;
    two->next= three;
    three->next= NULL;

    //print the liniked list values
    head=one;
    while(head!=NULL){
        cout<< head->data;
        head= head->next;
    }

}
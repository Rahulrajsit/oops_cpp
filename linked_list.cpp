#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
class LinkedList{
public:
    Node* head;
    LinkedList(){
        head=nullptr;
    }
    void insert(int data){
        Node* newNode=new Node(data);
        if(!head){
            head=newNode;
            return;
        }
        Node* temp=head;
        while (temp->next)
        {
            temp=temp->next;
        }
        temp->next=newNode;
    }
    void Display(){
        Node * temp=head;
        while (temp)
        {
            cout<<temp->data<<" ->";
            temp=temp->next;
        }
    }
};
  

int main(){
    LinkedList head;
    head.insert(10);
    head.insert(20);
    head.insert(30);
    head.insert(40);
    head.insert(50);
    head.Display();
    return 0;
}

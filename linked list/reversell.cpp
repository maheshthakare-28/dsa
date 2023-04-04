#include<bits/stdtr1c++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
void print(node*head){
    node* curr=head;
    while(curr!=NULL){
        cout<<curr->data<<endl;
        curr=curr->next;
    }
}
int main(){
    node *second;
    node *third;
    node *fourth;
    node *head;

    // Allocate memory for nodes in the linked list in Heap
    head = (node *)malloc(sizeof(struct node));
    second = (node *)malloc(sizeof(struct node));
    third = (node *)malloc(sizeof(struct node));
    fourth = (node *)malloc(sizeof(struct node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;
    cout<<"initiall"<<endl;
    print(head);

    node*prev = NULL;
    node*curr=head;
    node*next;
    while((curr)!=NULL){
        next=curr->next;
        curr->next=prev;

        prev=curr;
        curr=next;

    }
    head=prev;
    cout<<"final"<<endl;

    print(prev);
}
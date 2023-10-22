#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
}

void push(Node** head_ref, int new_data){
    Node* new_node = new Node();

    new_node -> data = new_data;

    new_node -> next = (*head_ref);

    (*head_ref) = new_node;
}

int getCount(Node* head){
    if (head == NULL){
        return 0;
    }

    else{
        return 1 + getCount(head -> next);
    }
}

int main(){
    Node* head = NULL;

    push(&head, 10);
    push(&head, 5);
    push(&head, 11);
    push(&head, 7);

    cout << "Count of Nodes is " << getCount(head) << endl;

    return 0;
}
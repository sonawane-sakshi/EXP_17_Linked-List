#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;

Node(int data) {
        value = data;
        next = NULL;
    }
};

// Function to insert a new node at the head of the list
void insertAtHead(Node* &head, int value) {
    Node* new_node = new Node(value);
new_node->next = head;
    head = new_node;
}

// Function to insert a new node at the tail of the list
void insertAtTail(Node* &head, int value) {
    Node* new_node = new Node(value);
    if (head == NULL) { // If the list is empty
        head = new_node;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
}

// Function to display the linked list
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
cout<< temp->value << " ";
        temp = temp->next;
    }
cout<< "NULL" <<endl;
}

int main() {
    Node* head = NULL; // Initialize head to NULL

insertAtHead(head, 4);
    display(head);
insertAtHead(head, 5);
    display(head);
insertAtTail(head, 3);
    display(head);

insertAtTail(head, 6); // Test inserting at tail when list is not empty
    display(head);

  return 0;
}
/*
**OUTPUT**
4 NULL
5 4 NULL
5 4 3 NULL
5 4 3 6 NULL
  */

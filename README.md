# Linked List

Experiment 17

## Aim 
To study and implement Linked List
## Theory 

A **linked list** is a linear data structure in which elements are stored in nodes, and each node points to the next one, forming a chain. Unlike arrays, linked lists do not have a fixed size, and elements are not stored in contiguous memory locations.

### Key Features:
- **Dynamic size**: The size of a linked list can grow and shrink at runtime.
- **Non-contiguous memory allocation**: Nodes are scattered in memory and linked via pointers.
- **Efficient insertions/deletions**: Adding or removing elements can be done in constant time if you have a pointer to the location.

### Types of Linked Lists:
1. **Singly Linked List**: Each node points to the next node.
2. **Doubly Linked List**: Each node points to both the previous and the next node.
3. **Circular Linked List**: The last node points back to the first node, forming a circle.

### Example:
In the following singly linked list, each node contains an integer and a pointer to the next node:

```cpp
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int num) {
        data = num;
        next = NULL;
    }
};

void insertHead(Node*& head, int newData) { // Pass head by reference
    Node* newNode = new Node(newData);
    newNode->next = head;
    head = newNode; // Update the head to point to the new node
}

void Disp(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl; // Indicate end of the list
}

int main() {
    Node* head = NULL; // Initialize head to NULL
    insertHead(head, 10);
    insertHead(head, 20); // Insert more nodes for testing
    insertHead(head, 30);
    Disp(head); // Display the list
    return 0;
}
```

### Algorithm

1. **Start**
2. Create a class `Node` with:
   - An integer variable `data` to store the value of the node.
   - A pointer `next` initialized to `NULL`, pointing to the next node in the list.
3. Define a function `insertHead(Node*& head, int newData)`:
   - Create a new node with the given data.
   - Set the `next` pointer of the new node to the current `head`.
   - Update the `head` to point to the new node.
4. Define a function `Disp(Node* head)`:
   - Initialize a temporary pointer `temp` to point to `head`.
   - Traverse through the list and print the `data` of each node followed by `->`.
   - Stop when `temp` becomes `NULL` and print `NULL` to indicate the end of the list.
5. In the `main()` function:
   - Initialize the head of the list to `NULL`.
   - Insert elements at the head of the list using `insertHead()`.
   - Display the linked list using the `Disp()` function.
6. **End**

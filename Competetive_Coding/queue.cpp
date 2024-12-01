#include <iostream>
using namespace std;

struct Node {
    Node* next;
    int val;

    Node() {
        next = NULL;
        val = -1;  // Default value for demonstration
    }
};

void traverse(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* insertIntoHead(Node*& head, int data) {
    Node* newNode = new Node();
    newNode->val = data;
    newNode->next = head;  // Insert new node at the beginning
    head = newNode;        // Update head to point to the new node
    return head;
}

Node* popFromHead(Node*& head) {
    if (head == NULL) return NULL;  // Check if the list is empty
    Node* temp = head;              // Store the current head
    head = head->next;              // Move head to the next node
    delete temp;                    // Free the old head
    return head;                    // Return the new head
}

struct Queue {
public:
    Node* first;  // Pointer to the first of the queue
    Node* last;   // Pointer to the last of the queue

    Queue() {
        first = NULL;  // Initialize front and last to NULL
        last = NULL;
    }

    void push(int data) {
        Node* newNode = new Node();
        newNode->val = data;

        if (last == NULL) {    // Queue is empty
            first = last = newNode; // Both front and rear point to new node
        } else {
            last->next = newNode; // Link the old rear to the new node
            last = newNode;        // Update the rear to the new node
        }
    }

    void pop() {
        if (first == NULL) {  // Queue is empty
            cout << "Cannot pop, queue is empty" << endl;
            return;
        }
        Node* temp = first;    // Store the current front
        first = first->next;    // Move front to the next node
        delete temp;           // Free the old first

        if (first == NULL) {   // If the queue is now empty
            last = NULL;       // Also update rear to NULL
        }
    }

    int front() {
        if (first == NULL) {
            cout << "Sorry, queue is empty!" << endl;
            return -1; // Or throw an exception
        }
        return first->val;    // Return the value at the front
    }

    bool isEmpty() {
        return first == NULL; // Check if the front is NULL
    }

    ~Queue() {
        while (first != NULL) { // Free all nodes
            pop();
        }
    }
};

int main() {
    Queue q;
    q.push(9);
    q.push(2);
    q.push(3);
    q.push(5);

    while (!q.isEmpty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}


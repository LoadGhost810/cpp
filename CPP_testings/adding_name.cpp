#include <iostream>

using namespace std;

struct Node {
    string name;
    Node* next;
};

void print(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->name << endl;
        current = current->next;
    }
}

int main() {
    // Create nodes for each student
    Node* student1 = new Node();
    Node* student2 = new Node();
    Node* student3 = new Node();
    Node* student4 = new Node();
    Node* student5 = new Node();
    Node* student6 = new Node();

    // Assign names to each node
    student1->name = "Alice";
    student2->name = "Bob";
    student3->name = "Charlie";
    student4->name = "Diana";
    student5->name = "Ethan";
    student6->name = "Fiona";

    // Link the nodes
    student1->next = student2;
    student2->next = student3;
    student3->next = student4;
    student4->next = student5;
    student5->next = student6;
    student6->next = nullptr; // Last node points to nullptr

    // Print the names in the linked list
    print(student1);
    return 0;
}
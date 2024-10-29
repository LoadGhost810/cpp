#include <iostream>
using namespace std;

struct Node {
    int num;
    Node * next;
};

class Numbers {
private: 
    Node* head;
    Node* last;

public: 
    Numbers()
{
    last = NULL;
    head = NULL;
}
    bool Is_empty()
    {
        return (head == NULL);
    }

    void insert_Number(int n)
    {
        Node* new_node = new Node;
        
        new_node->num = n;
        new_node->next = head;
        head = new_node;
    }

    // funtion to remove a node
        void remove_Number()
    {
        if (Is_empty())
            cout << "No elements .\n";
        else  if (head == last)
        {
            delete head;
            head == NULL;
            last == NULL;
        }
        else
        {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
        //funtion to insert a new node
        void insert( int key)
        {
            Node* current, * previous;
            current = head;
            previous = NULL;
            while (current != NULL && current->num != key)
            {
                previous = current;
                current = current->next;
            }
            Node* n = new Node;
            n->num = key;
            if (current == head) //if there is only one element
            {
                n->next = head;
                head = n;
            }
            else
            {
                previous->next = n;
                n->next = current;
            }
        }

        void display_all_nodes()
        {
            struct Node* temp = head;
            while (temp != NULL)
            {
                cout << temp->num << " ";
                temp = temp->next;
            }
        }

};


int main()
{
    Numbers numbers;
    cout << numbers.Is_empty() << endl;

    numbers.insert_Number(12);
    numbers.insert_Number(22);
    numbers.insert_Number(48);
    numbers.insert_Number(60);
    numbers.insert_Number(88);
    numbers.remove_Number();
    numbers.display_all_nodes();
}
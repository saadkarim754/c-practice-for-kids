#include <iostream>

using namespace std;

// Define the Node structure
struct Node {
    int data;
    Node* next;
};

// Define the LinkedList class
class LinkedList {
public:
    LinkedList() : head(nullptr) {}

    // Method to add a node to the list
    void addNode(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    // Method to search for a value in the list
    bool search(int value) {
        Node* current = head;
        while (current != nullptr) {
            if (current->data == value) {
                return true;
            }
            current = current->next;
        }
        return false;
    }

private:
    Node* head;
};

int main() {
    LinkedList list;
    list.addNode(10);
    list.addNode(20);
    list.addNode(30);

    int valueToSearch = 50;
    if (list.search(valueToSearch)) {
        cout << "Value " << valueToSearch << " found in the list." << endl;
    } else {
        cout << "Value " << valueToSearch << " not found in the list." << endl;
    }

    return 0;
}
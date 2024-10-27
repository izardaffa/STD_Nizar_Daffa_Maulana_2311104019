#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertSorted_2311104019(Node *&head) {
    Node *new_node = new Node;
    int data;

    cout << "Masukkan angka: ";
    cin >> data;

    new_node->data = data;
    new_node->next = nullptr;

    if (head == nullptr) {
        head = new_node;
    } else {
        Node *current = head;

        if (current->data > data) {
            new_node->next = current;
            head = new_node;
            return;
        }

        while (current->next != nullptr) {
            if (current->next->data > data) {
                new_node->next = current->next;
                current->next = new_node;
                return;
            }
            current = current->next;
        }
        new_node->next = current->next;
        current->next = new_node;
    }
}

void printList(Node *head) {
    if (head != nullptr) {
        Node *current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
}

int main() {
    Node *head = nullptr;

    insertSorted_2311104019(head);
    insertSorted_2311104019(head);
    insertSorted_2311104019(head);
    insertSorted_2311104019(head);

    printList(head);

    return 0;
}
#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertLast(Node *&head, int data) {
    Node *new_node = new Node;

    new_node->data = data;
    new_node->next = nullptr;

    if (head == nullptr) {
        head = new_node;
    } else {
        Node *current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = new_node;
    }
}

void searchElement_2311104019(Node* &head, int number) {
    if (head != nullptr) {
        Node* current = head;
        int i = 0;
        while (current->next != nullptr) {
            if (current->data == number) {
                cout << "Nilai " << number << " ditemukan pada index ke " << i << endl;
                return;
            }
            current = current->next;
            i++;
        }

        cout << "Nilai " << number << " tidak ditemukan." << endl;
    }
}

int main() {
    Node *head = nullptr;

    insertLast(head, 1);
    insertLast(head, 2);
    insertLast(head, 3);
    insertLast(head, 4);
    insertLast(head, 5);
    insertLast(head, 6);

    searchElement_2311104019(head, 4);
    searchElement_2311104019(head, 10);

    return 0;
}
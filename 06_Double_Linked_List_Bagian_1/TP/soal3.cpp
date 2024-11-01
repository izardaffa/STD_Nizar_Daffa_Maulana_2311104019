#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

Node *head = nullptr;
Node *tail = nullptr;

void insert(int data) {
    Node *new_node = new Node;

    new_node->data = data;
    new_node->next = nullptr;
    new_node->prev = nullptr;

    if (head == nullptr) {
        head = tail = new_node;
    } else {
        Node *current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = new_node;
        new_node->prev = current;
        tail = new_node;
    }
}

void displayAsc() {
    if (head == nullptr) {
        cout << "List Kosong!" << endl;
    } else {
        Node *current = head;

        cout << "Daftar elemen dari depan ke belakang: ";
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
}

void displayDesc() {
    if (head == nullptr) {
        cout << "List Kosong!" << endl;
    } else {
        Node *current = tail;

        cout << "Daftar elemen dari belakang ke depan: ";
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->prev;
        }
        cout << endl;
    }
}

int main() {
    insert(1);
    insert(2);
    insert(3);
    insert(4);

    displayAsc();
    displayDesc();

    return 0;
}
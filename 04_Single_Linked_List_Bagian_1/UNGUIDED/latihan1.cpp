#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *head;
Node *tail;

void insertFirst(int data) {
    Node *new_node = new Node;

    new_node->data = data;
    new_node->next = nullptr;

    if (head == nullptr) {
        head = tail = new_node;
    } else {
        new_node->next = head;
        head = new_node;
    }

    // cout << "Tambah node di depan (nilai: " << data << ")" << endl;
}

void insertLast(int data) {
    Node *new_node = new Node;

    new_node->data = data;
    new_node->next = nullptr;

    if (head == nullptr) {
        head = tail = new_node;
    } else {
        tail->next = new_node;
        tail = new_node;
    }
    // cout << "Tambah node di belakang (nilai: " << data << ")" << endl;
}

void printList() {
    Node *current = head;

    // cout << "Cetak linked list:" << endl;

    if (head != nullptr) {
        while (current != nullptr) {
            cout << current->data;

            if (current->next != nullptr) {
                cout << " -> ";
            }

            current = current->next;
        }
    } else {
        cout << "List kosong!";
    }

    cout << endl;
}

int main() {
    head = nullptr;
    tail = nullptr;

    insertFirst(10);
    insertLast(20);
    insertFirst(5);
    printList();

    return 0;
}

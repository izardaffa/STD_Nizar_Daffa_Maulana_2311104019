#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

void insertFirst(Node *&head, Node *&tail, int data) {
    Node *new_node = new Node;

    new_node->data = data;
    new_node->next = nullptr;
    new_node->prev = nullptr;

    if (head == nullptr) {
        head = tail = new_node;
    } else {
        Node *current = tail;
        while (current->prev != nullptr) {
            current = current->prev;
        }
        current->prev = new_node;
        new_node->next = current;
        head = new_node;
    }
}

void insertLast(Node *&head, Node *&tail, int data) {
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

void display(Node *head) {
    if (head == nullptr) {
        cout << "List Kosong!" << endl;
    } else {
        Node *current = head;

        cout << "DAFTAR ANGGOTA LIST: ";
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
}

int main() {
    Node *head = nullptr;
    Node *tail = nullptr;

    insertFirst(head, tail, 10);
    insertFirst(head, tail, 5);
    insertLast(head, tail, 20);
    display(head);

    return 0;
}
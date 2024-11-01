#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

Node *head = nullptr;
Node *tail = nullptr;

void insertFirst(int data) {
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

void insertLast(int data) {
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

void deleteFirst() {
    if (head == nullptr) {
        cout << "List kosong!" << endl;
        return;
    }

    Node* temp = head;
    head = head->next;

    if (head != nullptr) {
        head->prev = nullptr;
    } else {
        tail = nullptr;
    }
    
    delete temp;
}

void deleteLast() {
    if (head == nullptr) {
        cout << "List kosong!" << endl;
        return;
    }

    Node* temp = tail;
    tail = tail->prev;

    if (tail != nullptr) {
        tail->next = nullptr;
    } else {
        head = nullptr;
    }
    
    delete temp;
}

void display() {
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
    insertLast(10);
    insertLast(15);
    insertLast(20);

    deleteFirst();
    deleteLast();

    display();

    return 0;
}
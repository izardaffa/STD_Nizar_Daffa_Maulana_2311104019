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

void bubleSortList_2311104019(Node *&head) {
    if (head != nullptr) {
        bool swapped;
        Node *current = head;
        Node *lastSwapped = nullptr;

        do {
            swapped = false;

            while (current->next != lastSwapped) {
                if (current->data > current->next->data) {
                    int temp = current->data;
                    current->data = current->next->data;
                    current->next->data = temp;
                    swapped = true;
                }
                current = current->next;
            }
            lastSwapped = current;
        } while (swapped);
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

    insertLast(head, 4);
    insertLast(head, 2);
    insertLast(head, 3);
    insertLast(head, 1);

    cout << "Before:" << endl;
    printList(head);
    cout << endl;

    bubleSortList_2311104019(head);

    cout << "After:" << endl;
    printList(head);
    cout << endl;

    return 0;
}
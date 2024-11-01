<div align="center">

<b>TUGAS PENDAHULUAN</b>

<b>STRUKTUR DATA</b>

<b>MODUL 05</b>

<img src="../../logo-TU.webp" alt="Logo TelU" width="400">

<br><br>

Nama: 

Nizar Daffa Maulana (2311104019)

Dosen: 

Yudha Islami Sulistya, S.Kom., M.Kom.

<br><br>

**PROGRAM STUDI S1 REKAYASA PERANGKAT LUNAK**

**FAKULTAS INFORMATIKA**

**TELKOM UNIVERSITY PURWOKERTO**

**2024**

</div>

# Soal

- Soal TP: [Tugas-Pendahuluan-05](/TP%20MODUL%205%20Search%20SLL.pdf)

# Jawaban

1. Source Code:
    
    ```cpp
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
    ```

    Output:

    ```
    Nilai 4 ditemukan pada index ke 3
    Nilai 10 tidak ditemukan.
    ```

2. Source Code:
    
    ```cpp
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
    ```

    Output:

    ```
    Before:
    4 2 3 1

    After:
    1 2 3 4

    ```

3. Source Code:

    ```cpp
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
    ```

    Output:

    ```
    Masukkan angka: 4
    Masukkan angka: 2
    Masukkan angka: 3
    Masukkan angka: 1
    1 2 3 4 
    ```
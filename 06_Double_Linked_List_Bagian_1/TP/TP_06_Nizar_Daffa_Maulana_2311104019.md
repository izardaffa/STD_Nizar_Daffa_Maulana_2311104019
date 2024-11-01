<div align="center">

<b>TUGAS PENDAHULUAN</b>

<b>STRUKTUR DATA</b>

<b>MODUL 06</b>

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

- Soal TP: [Tugas-Pendahuluan-06](/TP%20MODUL%206%20DLL.pdf)

# Jawaban

1. Source Code:
    
    ```cpp
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
    ```

    Output:

    ```
    DAFTAR ANGGOTA LIST: 5 10 20 
    ```

2. Source Code:
    
    ```cpp
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
    ```

    Output:

    ```
    DAFTAR ANGGOTA LIST: 15 
    ```

3. Source Code:

    ```cpp
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
    ```

    Output:

    ```
    Daftar elemen dari depan ke belakang: 1 2 3 4 
    Daftar elemen dari belakang ke depan: 4 3 2 1
    ```
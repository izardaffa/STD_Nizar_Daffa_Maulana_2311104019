#include <iostream>
#include "list.cpp"

using namespace std;

int main() {
    List head;

    createList(head);

    for (int i = 0; i < 3; i++) {
        int number;

        cout << "Masukkan angka ke-" << i+1 << " : ";
        cin >> number;

        address elm = allocate(number);

        insertFirst(head, elm);
    }

    printInfo(head);

    return 0;
}

// 231 104 019
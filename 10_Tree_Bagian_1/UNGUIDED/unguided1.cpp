#include <iostream>
#include <limits>

using namespace std;

struct Pohon {
    char data;
    Pohon *left, *right, *parent;
};

Pohon *root;

void init() {
    root = NULL;
}

bool isEmpty() {
    return root == NULL;
}

void buatNode(char data) {
    if (isEmpty()) {
        root = new Pohon{data, NULL, NULL, NULL};
        cout << "Node " << data << " berhasil dibuat menjadi root." << endl;
    } else {
        cout << "Tree sudah dibuat." << endl;
    }
}

Pohon *insertLeft(char data, Pohon *node) {
    if (isEmpty()) {
        cout << "Buat tree terlebih dahulu." << endl;
        return NULL;
    }

    if (node->left != NULL) {
        cout << "Node " << node->data << " sudah ada child kiri!" << endl;
        return NULL;
    }

    Pohon *baru = new Pohon{data, NULL, NULL, node};
    node->left = baru;
    cout << "Node " << data << " berhasil ditambahkan ke child kiri " << node->data << endl;
    return baru;
}

Pohon *insertRight(char data, Pohon *node) {
    if (isEmpty()) {
        cout << "Buat tree terlebih dahulu." << endl;
        return NULL;
    }

    if (node->right != NULL) {
        cout << "Node " << node->data << " sudah ada child kanan!" << endl;
        return NULL;
    }

    Pohon *baru = new Pohon{data, NULL, NULL, node};
    node->right = baru;
    cout << "Node " << data << " berhasil ditambahkan ke child kanan " << node->data << endl;
    return baru;
}

void tampilChild(Pohon *node) {
    if (!node) {
        cout << "Node tidak ditemukan." << endl;
        return;
    }

    cout << "Child dari " << node->data << ": ";
    if (node->left) cout << "Left: " << node->left->data << " ";
    if (node->right) cout << "Right: " << node->right->data << " ";
    if (!node->left && !node->right) cout << "(Tidak ada child)";
    cout << endl;
}

void tampilDescendant(Pohon *node) {
    if (!node) return;

    if (node->left) {
        cout << node->left->data << " ";
        tampilDescendant(node->left);
    }

    if (node->right) {
        cout << node->right->data << " ";
        tampilDescendant(node->right);
    }
}

void cariDescendant(Pohon *node) {
    if (!node) {
        cout << "Node tidak ditemukan." << endl;
        return;
    }

    cout << "Descendant dari " << node->data << ": ";
    tampilDescendant(node);
    cout << endl;
}

bool is_valid_bst(Pohon *node, char min_val, char max_val) {
    if (!node) return true;
    if (node->data <= min_val || node->data >= max_val) return false;

    return is_valid_bst(node->left, min_val, node->data) &&
           is_valid_bst(node->right, node->data, max_val);
}

int cari_simpul_daun(Pohon *node) {
    if (!node) return 0;
    if (!node->left && !node->right) return 1;

    return cari_simpul_daun(node->left) + cari_simpul_daun(node->right);
}

void menu() {
    char pilihan, data, parentData;
    Pohon *parentNode = NULL;

    do {
        cout << "\n=== Menu ===" << endl;
        cout << "1. Buat Root" << endl;
        cout << "2. Tambah Child Kiri" << endl;
        cout << "3. Tambah Child Kanan" << endl;
        cout << "4. Tampilkan Child" << endl;
        cout << "5. Tampilkan Descendant" << endl;
        cout << "6. Periksa BST" << endl;
        cout << "7. Hitung Simpul Daun" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case '1':
                if (isEmpty()) {
                    cout << "Masukkan data root: ";
                    cin >> data;
                    buatNode(data);
                } else {
                    cout << "Tree sudah dibuat." << endl;
                }
                break;

            case '2':
                cout << "Masukkan parent node: ";
                cin >> parentData;
                parentNode = root;
                if (parentNode && parentNode->data == parentData) {
                    cout << "Masukkan data child kiri: ";
                    cin >> data;
                    insertLeft(data, parentNode);
                } else {
                    cout << "Parent tidak ditemukan." << endl;
                }
                break;

            case '3':
                cout << "Masukkan parent node: ";
                cin >> parentData;
                parentNode = root;
                if (parentNode && parentNode->data == parentData) {
                    cout << "Masukkan data child kanan: ";
                    cin >> data;
                    insertRight(data, parentNode);
                } else {
                    cout << "Parent tidak ditemukan." << endl;
                }
                break;

            case '4':
                cout << "Masukkan node: ";
                cin >> data;
                parentNode = root;
                if (parentNode && parentNode->data == data) {
                    tampilChild(parentNode);
                } else {
                    cout << "Node tidak ditemukan." << endl;
                }
                break;

            case '5':
                cout << "Masukkan node: ";
                cin >> data;
                parentNode = root;
                if (parentNode && parentNode->data == data) {
                    cariDescendant(parentNode);
                } else {
                    cout << "Node tidak ditemukan." << endl;
                }
                break;

            case '6':
                if (is_valid_bst(root, numeric_limits<char>::min(), numeric_limits<char>::max())) {
                    cout << "Pohon ini adalah Binary Search Tree yang valid." << endl;
                } else {
                    cout << "Pohon ini bukan Binary Search Tree yang valid." << endl;
                }
                break;

            case '7':
                cout << "Jumlah simpul daun: " << cari_simpul_daun(root) << endl;
                break;

            case '0':
                cout << "Keluar dari program." << endl;
                break;

            default:
                cout << "Pilihan tidak valid." << endl;
        }
    } while (pilihan != '0');
}

int main() {
    init();
    menu();
    return 0;
}

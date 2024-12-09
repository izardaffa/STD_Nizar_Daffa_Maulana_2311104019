#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int numVertices;

    cout << "Silakan masukkan jumlah simpul: ";
    cin >> numVertices;

    vector<string> cityNames(numVertices);

    for (int i = 0; i < numVertices; i++) {
        cout << "Simpul " << i + 1 << ": ";
        cin >> cityNames[i];
    }

    vector<vector<int>> adjMatrix(numVertices, vector<int>(numVertices, 0));

    cout << "Silakan masukkan bobot antar simpul:" << endl;
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            if (i == j) {
                adjMatrix[i][j] = 0;
                cout << cityNames[i] << " --> " << cityNames[j] << ": " << adjMatrix[i][j] << endl;
            } else {
                cout << cityNames[i] << " --> " << cityNames[j] << ": ";
                cin >> adjMatrix[i][j];
            }
        }
    }

    cout << "\nAdjacency Matrix:\n";
    
    cout << setw(8) << " ";
    for (int i = 0; i < numVertices; i++) {
        cout << setw(8) << cityNames[i];
    }
    cout << endl;

    for (int i = 0; i < numVertices; i++) {
        cout << setw(8) << cityNames[i];
        for (int j = 0; j < numVertices; j++) {
            cout << setw(8) << adjMatrix[i][j];
        }
        cout << endl;
    }

    return 0;
}

#include <iostream>
#include <queue>

using namespace std;

struct ElmNode;

struct ElmEdge {
    ElmNode *node;
    ElmEdge *next;
};

struct ElmNode {
    char info;
    bool visited;
    ElmEdge *firstEdge;
    ElmNode *next;
};

struct Graph {
    ElmNode *first;
};

void createGraph(Graph &G) {
    G.first = NULL;
}

void insertNode(Graph &G, char X) {
    ElmNode *newNode = new ElmNode;
    newNode->info = X;
    newNode->visited = false;
    newNode->firstEdge = NULL;
    newNode->next = NULL;

    if (G.first == NULL) {
        G.first = newNode;
    } else {
        ElmNode *temp = G.first;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void connectNode(ElmNode *N1, ElmNode *N2) {
    ElmEdge *newEdge = new ElmEdge;
    newEdge->node = N2;
    newEdge->next = N1->firstEdge;
    N1->firstEdge = newEdge;
}

void printInfoGraph(Graph G) {
    ElmNode *temp = G.first;
    while (temp != NULL) {
        cout << temp->info << " ";
        temp = temp->next;
    }
    cout << endl;
}

void resetVisited(Graph &G) {
    ElmNode *temp = G.first;
    while (temp != NULL) {
        temp->visited = NULL;
        temp = temp->next;
    }
}

void printDFS(Graph G, ElmNode *N) {
    if (N == NULL) return;
    N->visited = true;
    cout << N->info << " ";
    ElmEdge *edge = N->firstEdge;
    while (edge != NULL) {
        if (!edge->node->visited) printDFS(G, edge->node);
        edge = edge->next;
    }
}

void printBFS(Graph G, ElmNode *N) {
    queue<ElmNode*> q;
    q.push(N);
    N->visited = true;

    while (!q.empty()) {
        ElmNode *current = q.front();
        q.pop();
        cout << current->info << " ";

        ElmEdge *edge = current->firstEdge;
        while (edge != NULL) {
            if (!edge->node->visited) {
                edge->node->visited = true;
                q.push(edge->node);
            }
            edge = edge->next;
        }
    }
}

int main() {
    Graph G;
    createGraph(G);

    insertNode(G, 'A');
    insertNode(G, 'B');
    insertNode(G, 'C');
    insertNode(G, 'D');
    insertNode(G, 'E');
    insertNode(G, 'F');
    insertNode(G, 'G');
    insertNode(G, 'H');

    ElmNode *A = G.first;
    ElmNode *B = A->next;
    ElmNode *C = B->next;
    ElmNode *D = C->next;
    ElmNode *E = D->next;
    ElmNode *F = E->next;
    ElmNode *G1 = F->next;
    ElmNode *H = G1->next;

    connectNode(A, B);
    connectNode(A, C);
    connectNode(B, D);
    connectNode(B, E);
    connectNode(C, F);
    connectNode(C, G1);
    connectNode(D, H);

    cout << "DFS Traversal: ";
    resetVisited(G);
    printDFS(G, A);
    cout << endl;

    cout << "BFS Traversal: ";
    resetVisited(G);
    printBFS(G, A);
    cout << endl;

    return 0;
}

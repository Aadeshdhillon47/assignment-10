#include <iostream>
#include <unordered_set>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int v) { data = v; next = NULL; }
};

int main() {
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = b;

    unordered_set<Node*> visited;
    Node* cur = a;

    while(cur != NULL) {
        if(visited.count(cur)) {
            cout << "true";
            return 0;
        }
        visited.insert(cur);
        cur = cur->next;
    }

    cout << "false";
}

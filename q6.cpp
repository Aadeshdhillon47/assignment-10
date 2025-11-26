#include <iostream>
#include <unordered_set>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int v) { data = v; left = right = NULL; }
};

bool check(Node* root, unordered_set<int>& s) {
    if(root == NULL) return false;
    if(s.count(root->data)) return true;
    s.insert(root->data);
    return check(root->left, s) || check(root->right, s);
}

int main() {
    Node* root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(7);
    root->left->left = new Node(3);

    unordered_set<int> s;

    if(check(root, s))
        cout << "true";
    else
        cout << "false";
}

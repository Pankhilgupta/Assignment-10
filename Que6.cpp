#include <iostream>
#include <queue>
#include <unordered_set>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* insert(Node* root, int value) {
    Node* n = new Node;
    n->data = value;
    n->left = n->right = NULL;

    if(root == NULL) return n;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp->left == NULL) {
            temp->left = n;
            return root;
        }
        else q.push(temp->left);

        if(temp->right == NULL) {
            temp->right = n;
            return root;
        }
        else q.push(temp->right);
    }
    return root;
}

bool hasDuplicate(Node* root, unordered_set<int> &s) {
    if(!root) return false;
    if(s.find(root->data) != s.end()) return true;
    s.insert(root->data);
    return hasDuplicate(root->left, s) || hasDuplicate(root->right, s);
}

int main() {
    Node* root = NULL;

    root = insert(root, 5);
    root = insert(root, 3);
    root = insert(root, 7);
    root = insert(root, 3);

    unordered_set<int> s;

    if(hasDuplicate(root, s)) cout << "Duplicates Found";
    else cout << "No Duplicates";

    return 0;
}

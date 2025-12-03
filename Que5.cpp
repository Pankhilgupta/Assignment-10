#include <iostream>
#include <unordered_set>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* insert(Node* head, int value) {
    Node* n = new Node;
    n->data = value;
    n->next = NULL;

    if(head == NULL) return n;

    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
    return head;
}

int main() {
    Node* head = NULL;

    head = insert(head, 1);
    head = insert(head, 2);
    head = insert(head, 3);
    head = insert(head, 4);


    unordered_set<Node*> s;
    Node* curr = head;

    while(curr){
        if(s.find(curr) != s.end()){
            cout << "true";
            return 0;
        }
        s.insert(curr);
        curr = curr->next;
    }

    cout << "false";
    return 0;
}

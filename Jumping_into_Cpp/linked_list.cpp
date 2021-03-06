#include <iostream>

using namespace std;

typedef struct Node {
    int data;
    Node* next;
}Node;

class LinkedList{
public:
    LinkedList(){
        head = nullptr;
        tail = nullptr;
    };

    void CreateNode(int value) {
        Node* temp = new Node;
        temp->data = value;
        temp->next = nullptr;

        if (head == nullptr) {
            head = temp;
            tail = temp;
        }
        else {
            tail->next = temp;
            tail = temp;
        }
        }

    void PushNode(int value) {
        Node* temp = new Node;
        temp->data = value;
        temp->next = head;
        head = temp;
    }

    void InsertNodeAtPosition(int value, int pos) {
        Node* new_node = new Node;
        new_node->data = value;
        Node* current = head;

        for(int i=0; i<pos; i++) {
            current = current->next;
        }

        new_node->next = current->next;
        current->next = new_node;
    }

    void DeleteNodeAtPosition(int pos){
        Node* tmp = new Node;
        Node* current = head;

        for(int i=0; i<pos-1; i++) {
            current = current->next;
        }

        tmp->next = current->next->next;
        delete current->next;
        current->next = tmp->next;
    }

    void DisplayList() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << endl;
            current = current->next;
        }
    }

    ~LinkedList() { };

private:
    Node* head;
    Node* tail;

};


int main(){
    LinkedList ll;
    ll.CreateNode(1);
    ll.CreateNode(2);
    ll.PushNode(3);
    ll.PushNode(4);
    ll.InsertNodeAtPosition(5, 2);
    // ll.DeleteNodeAtPosition(2);
    ll.DisplayList();

    return 0;
}

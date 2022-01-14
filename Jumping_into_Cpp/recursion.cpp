#include <stdio.h>
#include <iostream>

using namespace std;

void recurse(int count) {
    cout << count << endl;
    recurse(count + 1);
}

int power(int x, int  y) {
    if (y == 0) return 1;

    return x * power(x, y - 1);
}

int power_efficient(int x, int y) {
    if (y == 0) return 1;

    if (y % 2 == 0) {

        if (y == 2) return x * x;

        return power_efficient(power_efficient(x, y / 2), 2);

    } else return x * power_efficient(x, y - 1);
}

void print_regular(int A[], int n){
    for (int i = 0; i <= n; i++) {
        cout << A[i] << endl;
    }
}

void print_reverse(int A[], int n){
    int i;
    if (n > 0) {
        i = n - 1;
        cout << A[i] << endl;
        print_reverse(A, i);
    }
}


// Linked lists
struct Node {
    int data;
    struct Node* next;
};

void push(struct Node** head_ref, int new_data){
    struct Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}


int main(){
    /* Start with the empty list */
    struct Node* head = NULL;

    /* Use push() to construct below list
    1->12->1->4->1 */
    push(&head, 1);
    push(&head, 4);
    push(&head, 1);
    push(&head, 12);
    push(&head, 1);

    return 0;
}






















#include "node.h"
#include <iostream>
#include "list.h"

using namespace std;

class LinkedList : public List {
private:
    node* head;
    node* tail;
    int size;

public:

    LinkedList(){

        head = nullptr;
        tail = nullptr;
        size = 0;
    }

    bool isEmpty() {
        return size == 0;
    }

    int getSize() {
        return size;
    }

    node* insert(int e, node* head) {
        node* n = new node();
        n->val = e;
        n->next = head;  // New node points to the old head
        size++;
        return n;  // Return new head (to update table[index])
    }

    int searchNode(node* a, int k){
        node* curr = a;

        while(curr && curr->val != k){
            curr = curr->next;
        }

        if(curr->val != k){
           cout << "Key does not exists" << endl;
           return -1;
        }

        return curr->val;
    }
    node* remove(int k,node* a) {
        node* curr = a;
        node* prev = nullptr;
        int ret;



        while(curr && curr-> val != k){
            prev = curr;
            curr = curr->next;
        }

        if(!curr){
            cout << "Key does not exist" << endl;
            return a;
        }

        if (prev == NULL) {
            a = a->next;
        } else {
            prev->next = curr->next;
        }
        if (curr == tail) {
            tail = prev;
        }

        delete curr;
        size--;
        return a;
    }

    // Print the linked list from the given node
    void print(node* a) {
        /*if (isEmpty() || a == nullptr) {
            cout << "List is empty" << endl;
            return;
        }*/

        node* curr = a;
        while (curr) {
            cout << curr->val << " -> ";
            curr = curr->next;
        }
        cout << "NULL" << endl;
    }

    /*~LinkedList() {
        while (!isEmpty()) {
            remove(); // Clean up all nodes
        }
    }*/
};

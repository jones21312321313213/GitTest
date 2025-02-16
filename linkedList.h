#include "node.h"
#include <iostream>
#include "list.h"
#include <string>
#include <utility>
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

    node* insert(pair<int,string> e, node* head) {
        node* n = new node();
        n->val = e;
        n->next = head;  // New node points to the old head
        size++;
        return n;  // Return new head (to update table[index])
    }

    string searchNode(node* a, int k){
        node* curr = a;

        while(curr && curr->val.first != k){
            curr = curr->next;
        }

        if(curr->val.first != k){
           cout << "Key does not exists" << endl;
           return "";
        }

        return curr->val.second;
    }
    node* remove(int k,node* a) {
        node* curr = a;
        node* prev = nullptr;
        int ret;



        while(curr && curr->val.first != k){
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
            cout << "("<<curr->val.first << ", " << curr->val.second << ")" << " -> ";
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

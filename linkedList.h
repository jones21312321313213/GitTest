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
    int remove() {
        if (isEmpty()) {
            cout << "List is empty. Nothing to remove." << endl;
            return -1;
        }

        int ret;
        if (size == 1) {
            ret = head->val;
            delete head;
            head = tail = nullptr; // Reset pointers
        } else {
            node* curr = head;
            while (curr->next != tail) {
                curr = curr->next;
            }
            ret = tail->val;
            delete tail;
            tail = curr;
            tail->next = nullptr;
        }
        size--;
        return ret;
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

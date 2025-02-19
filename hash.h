#include "linkedList.h"
#include <iostream>
#include "h.h"
using namespace std;

class HashTable : public Hashh {
    List* list = new LinkedList();
    node* table[10];  // Array of linked list nodes
    int mSize;
    int sizee;

public:
    HashTable() {
        for (int i = 0; i < 10; i++) {
            table[i] = NULL;
        }
        mSize = 10;
        sizee = 0;
    }

    bool isEmpty2() {
        for (int i = 0; i < mSize; i++) {
            if (table[i] != NULL) {
                return false;
            }
        }
        return true;
    }

    int hashFunction(int k) {
        return k % mSize;
    }

    void insertHash(int k, string value) {
        int index = hashFunction(k);
        table[index] = list->insert(make_pair(k, value), table[index]);
    }

    void removeItem(int k) {
        int index = hashFunction(k);
        table[index] = list->remove(k, table[index]);
    }

    string searchHash(int k) {
        int index = hashFunction(k);
        return list->searchNode(table[index], k);
    }

    void printHash() {
        for (int i = 0; i < 10; i++) {
            cout << "Index " << i << ": ";
            node* temp = table[i];
            list->print(temp);
        }
    }
};

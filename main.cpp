#include <iostream>
#include "hash.h"
#include <random>
using namespace std;

int main() {
    Hashh* ht = new HashTable();
    int key;
    string value;
    char a;
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<int> dist(1,1000);

    do {
        cout << "a for add, r for remove, p for print, s for search, e for isEmpty, and x to exit program: ";
        cin >> a;

        switch (a) {
            case 'a': {

                cout << "Enter a value (string): ";
                cin >> value;
                int randomKey = dist(gen);
                /*cout << "Enter a key (integer): ";
                cin >> key;*/

                ht->insertHash(randomKey, value);
                break;
            }
            case 'r': {
                cout << "Enter key to remove: ";
                cin >> key;
                ht->removeItem(key);
                break;
            }
            case 'p': {
                ht->printHash();
                break;
            }
            case 's': {
                cout << "Enter key to search: ";
                cin >> key;
                string result = ht->searchHash(key);
                if (result != "") {
                    cout << "Key: " << key << ", Value: " << result << " found in table." << endl;
                }
                break;
            }
            case 'e': {
                cout << (ht->isEmpty2() ? "True" : "False") << endl;
                break;
            }
            case 'x': {
                cout << "Thank you for using the program." << endl;
                break;
            }
            default: {
                cout << "Invalid input, try again!" << endl;
            }
        }
    } while (a != 'x');

    return 0;
}

#include <iostream>
#include "hash.h"
using namespace std;

int main()
{
    Hashh* ht = new HashTable();
    int num;
    cout << "Enter a number: ";
    cin >> num;
    while(num != -1){
        cout << "Enter a number: ";
        ht->insertHash(num);
        cin >> num;
    }
    ht->printHash();
    string a = ht->isEmpty2() ? "True" : "False";
    cout << a << endl;

    //cout << "Hello world!" << endl;
    return 0;
}

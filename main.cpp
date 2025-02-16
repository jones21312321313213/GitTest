#include <iostream>
#include "hash.h"
using namespace std;

int main()
{
    Hashh* ht = new HashTable();
    int num;
    char a;
    do{
        cout << "a for add, r for remove,p for print and x to exit program: ";
        cin >> a;

        switch(a){
        case 'a':{
            cout << "Enter a number: ";
            cin >> num;
            ht->insertHash(num);
            break;
            }
        case 'r':{
            cout << "Enter key to remove: ";
            cin >> num;
            ht->removeItem(num);
            break;
            }
        case 'p':{
            ht->printHash();
            break;
            }
        case 's':{
            cout << "Enter number to search: ";
            cin >> num;
            cout << "Value: " << ht->searchHash(num) << " Found in table" << endl;
            break;
        }
        case 'x':{
            cout << "Thank you for using the program";
            break;
            }
        }
    }while(a != 'x');
    string b = ht->isEmpty2() ? "True" : "False";
    cout << b << endl;

    //cout << "Hello world!" << endl;
    return 0;
}

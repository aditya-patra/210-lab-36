#include <iostream>
#include <fstream>
#include "IntBinaryTree.h"
using namespace std;

int main() {
    ifstream file("codes.txt");
    string code;
    IntBinaryTree tree;
    cout << "Creating binary search tree" << endl << endl;
    // create BST
    while(getline(file,code)) { 
        tree.insertNode(code);
    }
    // menu function
    int input = -1;
    // display BST
    tree.displayInOrder();
    while (input != 5) {
        // menu display
        cout << "\nMenu: \n  1 - Add Record\n  2 - Delete Record\n  3 - Search Record\n  4 - Modify Records\n  5 - Exit " << endl;
        cout << "Enter your choice:  ";
        cin >> input;
        // add record
        if (input == 1) {
            string valToAdd;
            cout << "Enter value to add: ";
            cin >> valToAdd;
            tree.insertNode(valToAdd);
            cout << "Added record: " << valToAdd << endl;
        }
        // remove record
        else if (input == 2) {
            string valToDelete;
            cout << "Enter value to delete: ";
            cin >> valToDelete;
            tree.remove(valToDelete);
            cout << "Removed record: " << valToDelete << endl;
        }
        // search for record
        else if (input == 3) {
            string valToSearch;
            cout << "Enter value to search for: ";
            cin >> valToSearch;
            bool exists = tree.searchNode(valToSearch);
            if (exists) {
                cout << "Record exists within BST" << endl;
            }
            else {
                cout << "Record does not exist within BST" << endl;
            }
        }
        // modify record(add and delete)
        else if (input == 4) {
            string valToDelete;
            cout << "Enter value to modify: ";
            cin >> valToDelete;
            if (!tree.searchNode(valToDelete)) {
                cout << "Value not found in BST" << endl;
                continue;
            }
            string valToAdd;
            cout << "Enter modified value: ";
            cin >> valToAdd;
            tree.remove(valToDelete);
            tree.insertNode(valToAdd);
            cout << "Replace record " << valToDelete << " with record " << valToAdd << endl;
        }
    }
    return 0;
}
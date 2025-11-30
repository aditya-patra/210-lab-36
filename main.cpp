#include <iostream>
#include <fstream>
#include "IntBinaryTree.h"
using namespace std;

int main() {
    ifstream file("codes.txt");
    string code;
    IntBinaryTree tree;
    cout << "Creating binary search tree" << endl << endl;
    int f = 0;
    while(getline(file,code)) { 
        tree.insertNode(code);
        f++;
        if (f == 10) {
            break;
        }
    }
    tree.displayInOrder();
    int input = -1;
    while (input != 5) {
        cout << "Menu: \n  1 - Add Record\n  2 - Delete Record\n  3 - Search Record\n  4 - Modify Records\n  5 - Exit" << endl;
        cout << "Enter your choice:  ";
        cin >> input;
        if (input == 1) {
            string valToAdd;
            cout << "Enter value to add: ";
            cin >> valToAdd;
            tree.insertNode(valToAdd);
        }
        else if (input == 2) {
            string valToDelete;
            cout << "Enter value to delete: ";
            cin >> valToDelete;
            tree.remove(valToDelete);
        }
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
        }
        tree.displayInOrder();
    }
    return 0;
}
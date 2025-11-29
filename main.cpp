#include <iostream>
#include <fstream>
#include "IntBinaryTree.h"
using namespace std;

int main() {
    ifstream file("codes.txt");
    string code;
    IntBinaryTree tree;
    cout << "Creating binary search tree" << endl << endl;
    while(getline(file,code)) { 
        tree.insertNode(code);
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
    }
    return 0;
}
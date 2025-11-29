#include <iostream>
#include <fstream>
#include "IntBinaryTree.h"
using namespace std;

int main() {
    ifstream file("codes.txt");
    string code;
    IntBinaryTree tree;
    cout << "Creating binary search tree " << endl << endl;
    while(getline(file,code)) { 
        tree.insertNode(code);
    }
    tree.displayInOrder();

    return 0;
}
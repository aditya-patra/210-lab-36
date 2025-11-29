#include <iostream>
#include <fstream>
#include "IntBinaryTree.h"
using namespace std;

int main() {
    ifstream file("codes.txt");
    string code;
    while(getline(file, code)) {
        cout << code << endl;
        break;
    }
    IntBinaryTree tree;
    tree.insertNode(8);
    tree.displayInOrder();

    return 0;
}
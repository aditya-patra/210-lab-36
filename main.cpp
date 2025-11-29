#include <iostream>
#include <fstream>
#include "IntBinaryTree.h"
using namespace std;

int main() {
    ifstream file("codes.txt");
    string code;
    while(getline(file,code)) { 
        cout << code << endl;
        break;
    }
    IntBinaryTree tree;
    tree.insertNode("blue");
    tree.insertNode("green");
    tree.insertNode("purple");
    tree.insertNode("black");
    tree.displayInOrder();

    return 0;
}
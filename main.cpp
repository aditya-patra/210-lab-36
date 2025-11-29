#include <iostream>
#include <fstream>
#include "IntBinaryTree.h"
using namespace std;

int main() {
    ifstream file("codes.txt");
    string code;
    while(getline(file, code)) {
        cout << code << endl;
    }

    return 0;
}
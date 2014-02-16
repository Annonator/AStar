/* 
 * File:   main.cpp
 * Author: annonator
 *
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include "Node.h"
#include "AStar.h"

void testf(Node* tt) {
    cout << tt->toString();
}
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    cout << "Hello World\n";


    Node::Node* test;

    vector<Node*> sammlung;
    for (int i = 0; i < 20; ++i) {
        sammlung.push_back(new Node());
        cout << i << ": " << sammlung[i]->toString() << endl;
    }
    test = sammlung[1];
    sammlung[0]->connectWith(test);
    sammlung[2]->connectWith(test);
    sammlung[3]->connectWith(test);
    test = sammlung[5];
    sammlung[3]->connectWith(test);
    sammlung[4]->connectWith(test);
    
    AStar star;
    cout << "--------\n";
    star.setNodes(sammlung);
    star.solve(sammlung[0], sammlung[5]);

    char t;
    cout << "ENDE\n";
    cin >> t;

    return 0;
}


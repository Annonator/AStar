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

#include "NodeWrapper.h"
#include "AStarWrapper.h"

void testf(Node* tt) {
    cout << tt->toString();
}
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    cout << "Hello World\n";


    NodeWrapper* tests = new NodeWrapper(10, 2, 3);
    Node* test;

    vector<Node*> sammlung;
    
    sammlung.push_back((Node*)tests);
    
    cout << endl << "++++" << endl << ((NodeWrapper*)sammlung[0])->toString() << endl << "+++++" << endl;
    
    for (int i = 0; i < 5; ++i) {
        sammlung.push_back((Node*)new NodeWrapper(i, 2*i, 3*i));
        //cout << i << ": " << sammlung[i]->toString() << endl;
    }
    
    test = sammlung[1];
    sammlung[0]->connectWith(test);
    sammlung[2]->connectWith(test);
    sammlung[3]->connectWith(test);
    test = sammlung[5];
    sammlung[3]->connectWith(test);
    sammlung[4]->connectWith(test);
    
    AStarWrapper star;
    //AStar star;
    cout << "--------\n";
    star.setNodes(sammlung);
    star.solve(sammlung[0], sammlung[5]);
    
    cout << star.toString();

    char t;
    cout << "ENDE\n";
    cin >> t;

    return 0;
}


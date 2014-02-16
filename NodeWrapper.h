/* 
 * File:   NodeWrapper.h
 * Author: annonator
 *
 */

#ifndef NODEWRAPPER_H
#define	NODEWRAPPER_H

#include "Node.h"
#include <string>

using namespace std;

class NodeWrapper : Node{
public:
    NodeWrapper();
    NodeWrapper(const NodeWrapper& orig);
    virtual ~NodeWrapper();
    
    void setId(int set);
    string toString();
private:
    int m_id;
};

#endif	/* NODEWRAPPER_H */

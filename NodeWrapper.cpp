/* 
 * File:   NodeWrapper.cpp
 * Author: annonator
 * 
 */

#include "NodeWrapper.h"

#include <sstream>


NodeWrapper::NodeWrapper() {
}

NodeWrapper::NodeWrapper(const NodeWrapper& orig) {
}

NodeWrapper::~NodeWrapper() {
}

void NodeWrapper::setId(int id){
    m_id = id;
}

string NodeWrapper::toString(){
    ostringstream os;
    
    os << m_id;
    
    return os.str();
}

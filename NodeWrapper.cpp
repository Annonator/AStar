/* 
 * File:   NodeWrapper.cpp
 * Author: annonator
 * 
 */

#include "NodeWrapper.h"

#include <sstream>

NodeWrapper::NodeWrapper() {
    int x = (float) rand() / 800;
    int y = (float) rand() / 800;

    init(x, y);
    m_id = 0;
}

NodeWrapper::NodeWrapper(int id, float x, float y) {
    init(x, y);

    m_id = id;
}

NodeWrapper::NodeWrapper(const NodeWrapper& orig) {
}

NodeWrapper::~NodeWrapper() {
}

void NodeWrapper::setId(int id) {
    m_id = id;
}

string NodeWrapper::toString() {
    ostringstream os;

    os << m_id;

    return os.str();
}

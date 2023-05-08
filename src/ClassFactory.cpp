#include "../include/ClassFactory.h"
using namespace chamber1999::factory;
ClassFactory::ClassFactory() {}
ClassFactory::~ClassFactory() {}
void ClassFactory::registClass(std::string name, CreateObject method) {
    m_classMap[name] = method;
}
void* ClassFactory::createObjectByName(std::string className) {
    std::map<std::string, CreateObject>::const_iterator iter = m_classMap.find(className);
    if (iter == m_classMap.end()) {
        return NULL;
    }
    return iter->second();
}

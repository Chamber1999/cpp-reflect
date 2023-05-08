#pragma once
#include "ClassFactory.h"
#include "singleton_t.h"
namespace chamber1999 {
    namespace factory {
        class ClassRegister {
            public:
                ClassRegister(std::string className, CreateObject method){
                    singleton_t<ClassFactory>::instance().registClass(className, method);
                }

        };
#define REGISTER(className) \
        void* objectCreator##className() { \
            return new className(); \
        } \
        ClassRegister g_creatorRegister##className(#className, (CreateObject)objectCreator##className);
    } // namespace factory
} // namespace chamber1999


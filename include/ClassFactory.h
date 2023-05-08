#pragma once
#include "singleton_t.h"
#include <map>
#include <string>
typedef void *(*CreateObject)(void);
namespace chamber1999 {
    namespace factory {
        class ClassFactory {
            private:
                ClassFactory();
                ~ClassFactory();
                std::map<std::string, CreateObject> m_classMap;

            public:
                friend class singleton_t<ClassFactory>;
                void *createObjectByName(std::string className);
                void registClass(std::string name, CreateObject method);
        };
    } // namespace factory
} // namespace chamber1999

#include <iostream>
#include "./include/ClassRegister.h"
#include "include/singleton_t.h"
using namespace chamber1999::factory;
using namespace chamber1999;
class TestA{
    public:
        TestA() {
            std::cout << "TestA" << std::endl;
        }
        ~TestA() {
            std::cout << "~TestA" << std::endl;
        }
        void print() {
            std::cout << "TestA::print" << std::endl;
        }
};
REGISTER(TestA);
int main(){
    TestA *a = (TestA *)singleton_t<ClassFactory>::instance().createObjectByName("TestA");
    a->print();
    return 0;
}

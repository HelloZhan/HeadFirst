#ifndef SINGLETON_H
#define SINGLETON_H
#include <string>
using std::string;
class Singleton{
public:
    static Singleton *getInstance();
    string getDescription();
private:
    Singleton();
    static Singleton *uniqueInstance;
};

#endif // SINGLETON_H

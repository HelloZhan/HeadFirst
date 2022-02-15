#ifndef COMMAND_H
#define COMMAND_H
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;
class Command{
public:
    std::string name="Command";
    virtual void execute()=0;
    virtual void undo()=0;
    virtual ~Command(){};
};

#endif // COMMAND_H

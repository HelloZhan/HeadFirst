#ifndef TVFACTORY_H
#define TVFACTORY_H
#include "LG.h"
#include "Sony.h"
#include <string>
using std::string;
class TVFactory{
public:
    TV *getTV(string type){
        if(type=="LG"){
            return new LG();
        }else if(type=="Sony"){
            return new Sony();
        }else{
            std::cerr<<"Type mismatch";
            return nullptr;
        }
    }
};

#endif // TVFACTORY_H

#ifndef PROXY_H
#define PROXY_H
#include "Subject.h"
#include "RealSubject.h"
class Proxy:public Subject{
public:
    Proxy();
    virtual void request()override final;
    virtual ~Proxy();
private:
    Subject *subject;
};

#endif // PROXY_H

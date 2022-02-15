#ifndef REALSUBJECT_H
#define REALSUBJECT_H
#include "Subject.h"
class RealSubject:public Subject{
public:
    virtual void request()override final;
    virtual ~RealSubject();
};

#endif // REALSUBJECT_H

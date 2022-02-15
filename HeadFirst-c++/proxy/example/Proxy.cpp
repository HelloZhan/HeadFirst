#include "Proxy.h"
Proxy::Proxy()
{
    subject=new RealSubject();
}

void Proxy::request()
{
    subject->request();
}

Proxy::~Proxy()
{
    delete subject;
}

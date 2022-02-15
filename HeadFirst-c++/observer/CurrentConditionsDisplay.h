#ifndef CURRENTCONDITIONSDISPLAY_H
#define CURRENTCONDITIONSDISPLAY_H
#include "DisplayElement.h"
#include "Observer.h"
#include "Subject.h"
class CurrentConditionsDisplay:public DisplayElement,public Observer{
public:
    CurrentConditionsDisplay(Subject *weatherData);
    virtual void update(float temperature,float humidity,float pressure)override final;
    virtual void display()override final;
    virtual ~CurrentConditionsDisplay();
private:
    float temperature;
    float humidity;
    Subject *weatherData;
};

#endif // CURRENTCONDITIONSDISPLAY_H

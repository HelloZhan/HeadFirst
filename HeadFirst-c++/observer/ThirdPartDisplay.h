#ifndef THIRDPARTDISPLAY_H
#define THIRDPARTDISPLAY_H
#include "DisplayElement.h"
#include "Observer.h"
#include "Subject.h"
class ThirdPartDisplay:public DisplayElement,public Observer{
public:
    ThirdPartDisplay(Subject *weatherData);
    virtual void update(float temperature,float humidity,float pressure)override final;
    float computeHeatIndex(float t,float rh);
    virtual void display()override final;
    virtual ~ThirdPartDisplay();
private:
    float heatIndex=0.0f;
    Subject *weatherData;
};
#endif // THIRDPARTDISPLAY_H

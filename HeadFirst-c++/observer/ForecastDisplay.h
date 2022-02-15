#ifndef FORECASTDISPLAY_H
#define FORECASTDISPLAY_H
#include "DisplayElement.h"
#include "Observer.h"
#include "Subject.h"
class ForecastDisplay:public DisplayElement,public Observer{
public:
    ForecastDisplay(Subject *weatherData);
    virtual void update(float temperature,float humidity,float pressure)override final;
    virtual void display()override final;
    virtual ~ForecastDisplay();
private:
    float currentPressure=29.92f;
    float lastPressure;
    Subject *weatherData;
};
#endif // FORECASTDISPLAY_H

#ifndef STATISTICSDISPLAY_H
#define STATISTICSDISPLAY_H
#include "DisplayElement.h"
#include "Observer.h"
#include "Subject.h"
class StatisticsDisplay:public DisplayElement,public Observer{
public:
    StatisticsDisplay(Subject *weatherData);
    virtual void update(float temperature,float humidity,float pressure)override final;
    virtual void display()override final;
    virtual ~StatisticsDisplay();
private:
    float maxTemp=0.0f;
    float minTemp=200;
    float tempSum=0.0f;
    int numReadings;
    Subject *weatherData;
};
#endif // STATISTICSDISPLAY_H

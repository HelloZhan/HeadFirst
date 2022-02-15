#ifndef WEATHERDATA_H
#define WEATHERDATA_H
#include "Subject.h"
#include "Observer.h"
#include <vector>
using std::vector;
class WeatherData:public Subject{
public:
    WeatherData();
    virtual void registerObserver(Observer *o)override final;
    virtual void removeObserver(Observer *o)override final;
    virtual void notifyObservers()override final;
    void measurementsChanged();
    void setMeasurements(float temperature,float humidity,float pressure);

    virtual ~WeatherData();
private:
    vector<Observer *> observers;
    float temperature;
    float humidity;
    float pressure;
};

#endif // WEATHERDATA_H

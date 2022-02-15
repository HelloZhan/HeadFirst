#include "WeatherData.h"

WeatherData::WeatherData()
{

}

void WeatherData::registerObserver(Observer *o)
{
    observers.push_back(o);
}

void WeatherData::removeObserver(Observer *o)
{
    if(observers.size()!=0){
        for(auto it=observers.begin();it!=observers.end();it++){
            if(*it==o){
                observers.erase(it);
                break;
            }
        }
    }
}

void WeatherData::notifyObservers()
{
    for(auto it=observers.begin();it!=observers.end();it++){
        (*it)->update(temperature,humidity,pressure);
    }
}

void WeatherData::measurementsChanged()
{
    notifyObservers();
}

void WeatherData::setMeasurements(float temperature, float humidity, float pressure)
{
    this->temperature=temperature;
    this->humidity=humidity;
    this->pressure=pressure;
    measurementsChanged();
}

WeatherData::~WeatherData()
{
    observers.clear();
}

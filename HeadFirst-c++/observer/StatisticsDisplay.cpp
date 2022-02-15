#include "StatisticsDisplay.h"
#include <iostream>
using std::cout;
using std::endl;

StatisticsDisplay::StatisticsDisplay(Subject *weatherData)
{
    this->weatherData=weatherData;
    weatherData->registerObserver(this);
}

void StatisticsDisplay::update(float temperature, float humidity, float pressure)
{
    tempSum += temperature;
    if(temperature>maxTemp){
        maxTemp=temperature;
    }
    if(temperature<minTemp){
        minTemp=temperature;
    }
    display();
}

void StatisticsDisplay::display()
{
    cout<<"Avg/Max/Min temperature = "<<(tempSum / numReadings)<<"/"<<maxTemp<<"/"<<minTemp<<endl;
}

StatisticsDisplay::~StatisticsDisplay()
{

}

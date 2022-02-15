#include <iostream>
#include "WeatherData.h"
#include "CurrentConditionsDisplay.h"
#include "StatisticsDisplay.h"
#include "ForecastDisplay.h"
#include "ThirdPartDisplay.h"
using namespace std;

int main()
{

    WeatherData *weatherData = new WeatherData();

    CurrentConditionsDisplay *currentDisplay =
                new CurrentConditionsDisplay(weatherData);
    StatisticsDisplay *statisticsDisplay = new StatisticsDisplay(weatherData);
    ForecastDisplay *forecastDisplay = new ForecastDisplay(weatherData);

    weatherData->setMeasurements(80, 65, 30.4f);
    weatherData->setMeasurements(82, 70, 29.2f);
    weatherData->setMeasurements(78, 90, 29.2f);

    weatherData->removeObserver(forecastDisplay);
    weatherData->setMeasurements(62, 90, 28.1f);

//    //WeatherStationHeatIndex
//    WeatherData *weatherData = new WeatherData();
//    CurrentConditionsDisplay *currentDisplay = new CurrentConditionsDisplay(weatherData);
//    StatisticsDisplay *statisticsDisplay = new StatisticsDisplay(weatherData);
//    ForecastDisplay *forecastDisplay = new ForecastDisplay(weatherData);
//    ThirdPartDisplay *heatIndexDisplay = new ThirdPartDisplay(weatherData);

//    weatherData->setMeasurements(80, 65, 30.4f);
//    weatherData->setMeasurements(82, 70, 29.2f);
//    weatherData->setMeasurements(78, 90, 29.2f);
    return 0;
}

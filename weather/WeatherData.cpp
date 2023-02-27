#include "WeatherData.h"

WeatherData::WeatherData()
{
    pressure = 0;
    temperature = 0;
    humidity = 0;
}

WeatherData::~WeatherData()
{

}

float WeatherData::getPressure()
{
    return pressure;
}


float WeatherData::getTemperature()
{
    return temperature;
}

float WeatherData::getHumidity()
{
    return humidity;
}

int WeatherData::setParametres(float pressure, float temperature, float humidity)
{
    this->pressure = pressure;
    this->humidity = humidity;
    this->temperature = temperature;
    return 0;   
}

int WeatherData::RegisterObserver(Observer *o)
{
    observer_set.insert(o);
}

int WeatherData::DeleteObserver(Observer *o)
{
    observer_set.erase(o);

}

int WeatherData::NotifyObservers()
{
    for (auto i = observer_set.cbegin(); i != observer_set.cend(); i++)
    {
        (*i)->Update();
    }
}
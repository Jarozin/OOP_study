#ifndef WEATHERDATA_H
#define WEATHERDATA_H

#pragma once
#include "Subject.h"
#include <set>
class WeatherData: public Subject
{
public:
    WeatherData();
    ~WeatherData() override;
    float getPressure();
    float getTemperature();
    float getHumidity();
    int setParametres(float, float, float); // для управления параметрами

    int RegisterObserver(Observer *o) override;
    int DeleteObserver(Observer *o) override;
    int NotifyObservers() override;
private:
    float pressure, temperature, humidity;
    std::set<Observer *> observer_set;
};

#endif
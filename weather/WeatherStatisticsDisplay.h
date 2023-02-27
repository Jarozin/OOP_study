#ifndef WEATHERSTATISTICSDISPLAY_H
#define WEATHERSTATISTICSDISPLAY_H

#pragma once
#include "Observer.h"
#include "Display.h"
#include <iostream>
class WeatherStatisticsDisplay: public Display, public Observer
{
public:
    WeatherStatisticsDisplay(WeatherData *);
    ~WeatherStatisticsDisplay();
    int show() override;
    void Update() override;
private:
    float avg_pressure, avg_temperature, avg_humidity;
    int amount;
};

#endif
#ifndef CURRENTWEATHERDISPLAY_H
#define CURRENTWEATHERDISPLAY_H

#pragma once
#include "Observer.h"
#include "Display.h"
#include "iostream"
class CurrentWeatherDisplay: public Display, public Observer
{
public:
    CurrentWeatherDisplay(WeatherData *weather_data);
    ~CurrentWeatherDisplay() override;
    int show() override;
    void Update() override;
private:
    float pressure, temperature, humidity, heat;
};

#endif
#ifndef CURRENTWEATHERDISPLAY_H
#define CURRENTWEATHERDISPLAY_H

#pragma once
#include "Observer.h"
#include "Display.h"
#include "iostream"
class CurrentWeatherDisplay: public Display, public Observer
{
public:
    CurrentWeatherDisplay();
    ~CurrentWeatherDisplay() override;
    int show() override;
    int Update() override;
private:
    float pressure, temperature, humidity;
};

#endif
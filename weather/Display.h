#ifndef DISPLAY_H
#define DISPLAY_H

#pragma once
#include "WeatherData.h"
class Display
{
public:
    Display();
    virtual ~Display() = 0;
    virtual int show() = 0;
protected:
    WeatherData *weather_data;
};

#endif
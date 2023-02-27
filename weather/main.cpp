#include <iostream>
#include "WeatherData.h"
#include "CurrentWeatherDisplay.h"
int main() {
    WeatherData weather_data;
    CurrentWeatherDisplay current_weather_display(&weather_data);

    weather_data.setParametres(5, 15, 25);
    weather_data.setParametres(13, 11, 46);
    return 0;
}
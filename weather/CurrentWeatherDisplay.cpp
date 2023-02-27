#include "CurrentWeatherDisplay.h"

CurrentWeatherDisplay::CurrentWeatherDisplay(WeatherData *weather_data)
{
    this->weather_data = weather_data;
    weather_data->RegisterObserver(this);
}

CurrentWeatherDisplay::~CurrentWeatherDisplay()
{
    weather_data->DeleteObserver(this);
}

int CurrentWeatherDisplay::show()
{
    std::cout << "Current pressure: " << pressure << std::endl << "Current temperature: " << temperature << std::endl << "Current humidity: " << humidity << std::endl;
}

void CurrentWeatherDisplay::Update()
{
    humidity = weather_data->getHumidity();
    temperature = weather_data->getTemperature();
    pressure = weather_data->getPressure();
    show();
}
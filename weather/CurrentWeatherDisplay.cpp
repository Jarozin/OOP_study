#include "CurrentWeatherDisplay.h"

CurrentWeatherDisplay::CurrentWeatherDisplay(WeatherData *weather_data)
{
    this->weather_data = weather_data;
}

CurrentWeatherDisplay::~CurrentWeatherDisplay()
{
    
}

int CurrentWeatherDisplay::show()
{
    std::cout << std::format("Current pressure: {} \n Current temperature: {}\n Current humidity: {}\n", pressure, temperature, humidity);
}

int CurrentWeatherDisplay::Update()
{
    humidity = weather_data->getHumidity();
    temperature = weather_data->getTemperature();
    pressure = weather_data->getPressure();
    return 0;
}
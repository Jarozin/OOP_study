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
    std::cout << "Current pressure: " << pressure << std::endl << "Current temperature: " << temperature << std::endl << "Current humidity: " << humidity << std::endl;
}

void CurrentWeatherDisplay::Update()
{
    humidity = weather_data->getHumidity();
    temperature = weather_data->getTemperature();
    pressure = weather_data->getPressure();
}
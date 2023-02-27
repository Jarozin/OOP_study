#include "WeatherStatisticsDisplay.h"

#include "WeatherStatisticsDisplay.h"

WeatherStatisticsDisplay::WeatherStatisticsDisplay(WeatherData *weather_data)
{
    this->weather_data = weather_data;
    weather_data->RegisterObserver(this);
    amount = 0;
}

WeatherStatisticsDisplay::~WeatherStatisticsDisplay()
{
    weather_data->DeleteObserver(this);
}

int WeatherStatisticsDisplay::show()
{
    std::cout << "Avg pressure: " << avg_pressure << std::endl << "Avg temperature: " << avg_temperature << std::endl << "Avg humidity: " << avg_humidity << std::endl << std::endl;
}

void WeatherStatisticsDisplay::Update()
{
    if (amount == 0)
    {
        avg_humidity = weather_data->getHumidity();
        avg_temperature = weather_data->getTemperature();
        avg_pressure = weather_data->getPressure();
    }
    else
    {
        avg_humidity = (avg_humidity * amount + weather_data->getHumidity()) / (amount + 1);
        avg_temperature = (avg_temperature * amount + weather_data->getTemperature()) / (amount + 1);
        avg_pressure = (avg_pressure * amount + weather_data->getPressure()) / (amount + 1);
    }
    amount++;
    show();
}
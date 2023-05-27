#include <iostream>
#include <vector>
struct WeatherData
{
    double temperature;
    double humidity;
    double windSpeed;
};
//functions
void trainModel(const std::vector<WeatherData> &trainingData)
{
    std::cout << "Model trained!" << std::endl;
}
void predictWeather(const WeatherData &input)
{
    double randomPrediction = rand() % 100;
    std::cout << "Weather prediction: " << randomPrediction << std::endl;
}

int main()
{
    std::vector<WeatherData> trainingData;
    WeatherData data1 = {25.0, 0.6, 10.0};
    WeatherData data2 = {30.0, 0.8, 12.0}; 
    trainingData.push_back(data1);
    trainingData.push_back(data2);
    trainModel(trainingData);
    WeatherData input = {28.0, 0.7, 11.0};
    predictWeather(input);
    return 0;
}

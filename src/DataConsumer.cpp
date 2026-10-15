#include <iostream>
#include <string>

// Учебная имитация получения данных через Kafka Consumer.
void receiveDataFromKafka(const std::string& topic, const std::string& message)
{
    std::cout << "Kafka Consumer <- topic '" << topic
              << "': " << message << std::endl;
}

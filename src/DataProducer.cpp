#include <iostream>
#include <string>

// Учебная имитация отправки данных через Kafka Producer.
void sendDataToKafka(const std::string& topic, const std::string& message)
{
    std::cout << "Kafka Producer -> topic '" << topic
              << "': " << message << std::endl;
}

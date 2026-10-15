#include <iostream>
#include <string>

void logKafkaMessage(const std::string& message)
{
    std::cout << "[Kafka] " << message << std::endl;
}
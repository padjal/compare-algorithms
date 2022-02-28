#include <iostream>
#include <chrono>
#include <ctime>
#include <string>
#include "logger.h"

Logger::Logger(std::string fileName) : fileName_(fileName) {
    logFile_.open(fileName);
    logFile_.close();
}

void Logger::log(char* text) {
    auto date_time = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());

    std::string time_string = std::ctime(&date_time);

    time_string = time_string.substr(0, time_string.size() - 1);

    logFile_.open(fileName_, std::ios_base::app);
    logFile_ << time_string << ": " << text << "\n";
    logFile_.close();
}


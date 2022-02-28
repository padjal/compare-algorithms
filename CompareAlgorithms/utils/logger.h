#include <fstream>
#include <string>

class Logger{
private:
    std::ofstream logFile_;
    std::string fileName_;
public:
    Logger(std::string fileName);
    void log(char*);
};
#include <fstream>
#include <string>
#include <vector>

class Logger{
private:
    std::ofstream logFile_;
    std::string fileName_;
public:
    explicit Logger(std::string fileName);
    void log(std::string text);
    void log(std::vector<int>&);
};
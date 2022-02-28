#include <fstream>

class Logger{
private:
    std::ofstream logFile_;
public:
    Logger();
    void log(char*);
};
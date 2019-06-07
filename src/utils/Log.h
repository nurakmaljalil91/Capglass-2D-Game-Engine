#ifndef LOG_H
#define LOG_H

#include <iostream>
#include <fstream>

namespace cg2d
{
class Log
{
private:
    const char *file_location;
    bool is_open;

public:
    

    Log();
    ~Log();

    void Create();
    void Open(const char* file_location);
    void Write(const char* message);
    void Equals(Log log);
    void Close();


};
} // namespace cg2d

#endif //LOG_H
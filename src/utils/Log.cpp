#include "Log.h"

cg2d::Log::Log()
{
    std::ofstream log_file("../data/test.log");
    if(!log_file){
        std::cout << "It not existed" << std::endl;
    }
    log_file << "This is test" << std::endl;
    std::cout << "It should work!" << std::endl;
    log_file.close();
}
cg2d::Log::~Log() {}

void cg2d::Log::Create()
{
    std::ofstream log_file("../data/gugugaga.log");
    if(!log_file){
        std::cout << "It not existed" << std::endl;
    }
    log_file << "eyes on me!" << std::endl;
    std::cout << "It should work!" << std::endl;
    log_file.close();
}
void cg2d::Log::Open(const char *file_location) {}
void cg2d::Log::Write(const char *message) {}
void cg2d::Log::Equals(Log log) {}
void cg2d::Log::Close() {

}
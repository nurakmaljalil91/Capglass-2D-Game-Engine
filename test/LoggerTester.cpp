#include <iostream>
#include <fstream>

int main(int argc, char const *argv[])
{
    /* code */
    std::ofstream file("test.txt");
    file << "This is tester 2" << std::endl;
    file.close();
    return 0;
}

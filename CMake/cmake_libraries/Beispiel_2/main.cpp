#include <boost/filesystem.hpp>
#include <iostream>

int main()
{
    std::cout << "Dateigröße main.cpp: " 
              << boost::filesystem::file_size("../../main.cpp")
              << " bytes" << std::endl;

    return 0;
}

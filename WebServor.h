#ifndef WEBSERVOR
#define WEBSERVOR

#include <string>
#include <fstream>
#include <streambuf>

class WebServor
{
public:
    WebServor(/* args */);
    ~WebServor();

    std::string ServeFile(std::string path);
private:
    /* data */
};

#endif
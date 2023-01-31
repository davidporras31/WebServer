#ifndef WEBSERVOR
#define WEBSERVOR

#include <string>
#include <fstream>

class WebServor
{
public:
    WebServor();
    ~WebServor();

    std::string ServeFile(std::string path);

    void setOrigin(std::string origin);
private:
    std::string origin;
};

#endif
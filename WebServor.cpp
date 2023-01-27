#include "WebServor.h"

WebServor::WebServor()
{
    this->origin = ".";
}

WebServor::~WebServor()
{
}
std::string WebServor::ServeFile(std::string path){
    std::string ret = "";

    std::ifstream stream;
    stream.open(this->origin + path,std::ifstream::in);

    if(stream.is_open()){
        stream.seekg(0, std::ios::end);   
        ret.reserve(stream.tellg());
        stream.seekg(0, std::ios::beg);

        ret.assign((std::istreambuf_iterator<char>(stream)),
                    std::istreambuf_iterator<char>());
    }
    stream.close();

    return ret;
}
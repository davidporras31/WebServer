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
        ret.resize((size_t)stream.tellg());
        stream.seekg(0, std::ios::beg);

        stream.read(&ret[0],ret.size());
        stream.close();
    }

    return ret;
}

void WebServor::setOrigin(std::string origin)
{
    this->origin = origin;
}

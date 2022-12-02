#include "FileReader.hpp"

FileReader::FileReader(std::string file_path) {
    std::ifstream stream;
    std::stringstream sstream;
    stream.open(file_path);
    if(stream.is_open()) {
        sstream << stream.rdbuf();
        m_file_content = sstream.str();
    }
    else {
        throw new std::runtime_error("Can't open file");
    }
}

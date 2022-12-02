#ifndef _FILEREADER_H_
#define _FILEREADER_H_
#include <fstream>
#include <sstream>
#include <string>
#include <exception>

class FileReader
{
public:
    static std::string get_file_content(std::string file_path);
};

#endif // _FILEREADER_H_
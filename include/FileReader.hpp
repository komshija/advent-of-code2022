#ifndef _FILEREADER_H_
#define _FILEREADER_H_
#include <exception>
#include <fstream>
#include <sstream>
#include <string>

class FileReader {
 public:
  static std::string get_file_content(std::string file_path);
};

#endif  // _FILEREADER_H_
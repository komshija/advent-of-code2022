#include "FileReader.hpp"

std::string FileReader::get_file_content(std::string file_path) {
  std::ifstream stream;
  std::stringstream sstream;
  stream.open(file_path);

  if (stream.is_open()) {
    sstream << stream.rdbuf();
    return sstream.str();
  } else {
    throw new std::runtime_error("Can't open file");
  }
}

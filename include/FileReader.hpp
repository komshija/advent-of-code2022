#ifndef _FILEREADER_H_
#define _FILEREADER_H_
#include <exception>
#include <fstream>
#include <sstream>
#include <string>

namespace adventofcode {
namespace utils {

class FileReader {
 public:
  static std::string get_file_content(std::string file_path);
};

}  // namespace utils
}  // namespace adventofcode
#endif  // _FILEREADER_H_
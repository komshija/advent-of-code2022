#include <fstream>
#include <sstream>
#include <string>
#include <exception>

class FileReader
{
private:
    std::string m_file_content;
public:
    FileReader(std::string file_path);
    ~FileReader() = default;

    void get_file_content(std::string& content) { 
        content = m_file_content;
    }
};
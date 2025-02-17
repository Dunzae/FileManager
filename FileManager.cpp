#ifndef __FILEMANAGER_H__
#define __FILEMANAGER_H__
#include <iostream>
#include <fstream>

class FileManager
{
private:
    std::ofstream file;
    std::string path;
    std::string fileName;
    std::string fileExtension;
    std::string fileContent;

public:
    FileManager();
    ~FileManager();
    void setPath(std::string path);
    void setFileName(std::string fileName);
    void setFileExtension(std::string fileExtension);
    void setFileContent(std::string fileContent);
    std::string getPath();
    std::string getFileName();
    std::string getFileExtension();
    std::string getFileContent();
    void createFile();
    void readFile();
    void writeFile(std::string fileContent);
    void deleteFile();
};

#endif
#ifndef FINAL_PROJECT_FOLDER_FILE_MANAGER_H
#define FINAL_PROJECT_FOLDER_FILE_MANAGER_H
#include<iostream>
#include <fstream>
#include "dictionary.h"
class file_manager
{
public:
    dictionary readFromFile(const std::string&);
    void writeToFile(dictionary&,const std::string& fileName);
};
#endif //FINAL_PROJECT_FOLDER_FILE_MANAGER_H

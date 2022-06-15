#ifndef FINAL_PROJECT_FOLDER_ENTRY_H
#define FINAL_PROJECT_FOLDER_ENTRY_H
#include <iostream>
#include <string>
class entry
{
public:
    std::string word;
    std::string definition;

    entry(const std::string&, const std::string&);
    entry(){};
    bool have_definition();
    virtual ~entry(){};
    virtual void edit_word(const std::string &)=0;
    virtual void add_definition(const std::string &)=0;
    virtual void edit_definition(const std::string &)=0;
};
#endif //FINAL_PROJECT_FOLDER_ENTRY_H

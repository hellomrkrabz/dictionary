#ifndef FINAL_PROJECT_FOLDER_MODIFICABLE_ENTRY_H
#define FINAL_PROJECT_FOLDER_MODIFICABLE_ENTRY_H
#include "entry.h"
#include "number_of_modifications.h"
#include <iostream>

class modificable_entry : public entry, public number_of_modifications
{
public:
    modificable_entry(int, const std::string &, std::string &);
    void edit_word(const std::string &);
    void add_definition(const std::string &);
    void edit_definition(const std::string &);
    modificable_entry &operator=(const modificable_entry&);
};
#endif //FINAL_PROJECT_FOLDER_MODIFICABLE_ENTRY_H

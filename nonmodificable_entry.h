#ifndef FINAL_PROJECT_FOLDER_NONMODIFICABLE_ENTRY_H
#define FINAL_PROJECT_FOLDER_NONMODIFICABLE_ENTRY_H
#include "entry.h"
#include "number_of_modifications.h"

class nonmodificable_entry : public entry, public number_of_modifications
{
public:
    nonmodificable_entry(const std::string , std::string );

    void edit_word(const std::string &){};
    void add_definition(const std::string &) override;
    void edit_definition(const std::string &) override;
    nonmodificable_entry &operator=(const nonmodificable_entry&);
};

#endif //FINAL_PROJECT_FOLDER_NONMODIFICABLE_ENTRY_H

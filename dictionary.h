#ifndef FINAL_PROJECT_FOLDER_DICTIONARY_H
#define FINAL_PROJECT_FOLDER_DICTIONARY_H
#include <string>
#include <vector>
#include "entry.h"
#include "nonmodificable_entry.h"
#include "modificable_entry.h"

class dictionary {
public:
    std::vector<entry*> entries;
    dictionary(dictionary &);

    dictionary();
    ~dictionary();

    void add_Entry(entry*);
    bool removeEntry(entry*);

    entry* find(std::string& word);
    dictionary &operator=(dictionary&&);

    int getSize()
    {
        return entries.size();
    }

/*    const std::vector<entry *> &getEntries() const;*/
};

#endif //FINAL_PROJECT_FOLDER_DICTIONARY_H

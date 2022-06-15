#include "dictionary.h"
#include "entry.h"
#include "nonmodificable_entry.h"
#include <iostream>
#include <algorithm>

dictionary::dictionary() {};

dictionary::~dictionary() {
    this->entries.clear();
}

void dictionary::add_Entry(entry* _entry)
{
    this->entries.push_back(_entry);
}

bool dictionary::removeEntry(entry* _entry)
{
    auto position = std::find(entries.begin(), entries.end(), _entry);
    if (position != entries.end()) {
        entries.erase(position);
       // entries.shrink_to_fit();
        return true;
    }
    return false;
}
entry* dictionary::find(std::string& _word)
{
    for(entry* _entry: this->entries)
    {
        if(_word == _entry->word)
        {
            return _entry;
        }
    }
    return nullptr;
}

dictionary &dictionary::operator=(dictionary&& new_dict)
{
    if(&new_dict != this)
    {
        entries.clear();

        entries = new_dict.entries;

        new_dict.entries.clear();
    }
    return *this;
}

dictionary::dictionary(dictionary &_dictionary) {

}
/*

const std::vector<entry *> &dictionary::getEntries() const {
    return entries;
}
*/

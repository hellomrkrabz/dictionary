#include "nonmodificable_entry.h"

nonmodificable_entry::nonmodificable_entry(const std::string _word, std::string _def): number_of_modifications(0), entry(_word, _def)
{
}

void nonmodificable_entry::add_definition(const std::string &s)
{
    if(definition==""){
        nonmodificable_entry::edit_definition(s);
        number_of_modifications::modifications=0;
    }
    else
    {
        nonmodificable_entry::edit_definition(s);
    }
}
void nonmodificable_entry::edit_definition(const std::string &s)
{
    definition = s;
    number_of_modifications::modifications+=1;
}

nonmodificable_entry & nonmodificable_entry::operator=(const nonmodificable_entry& _entry)
{
    if(definition != _entry.definition){
        edit_definition(_entry.definition);
    }
    return *this;
}

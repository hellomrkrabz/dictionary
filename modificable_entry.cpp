#include "modificable_entry.h"
#include "entry.h"

modificable_entry::modificable_entry(int _modif, const std::string &_word, std::string &_def): number_of_modifications(0), entry(_word, _def)
{
}

void modificable_entry::edit_word(const std::string &s)
{
    word = s;
    number_of_modifications::modifications+=1;
}

void modificable_entry::add_definition(const std::string &s)
{
    if(definition==""){
        modificable_entry::edit_definition(s);
        number_of_modifications::modifications=0;
    }
}

void modificable_entry::edit_definition(const std::string &s)
{
    definition = s;
    number_of_modifications::modifications+=1;
}

modificable_entry & modificable_entry::operator=(const modificable_entry& _entry)
    {
        if(definition != _entry.definition){
            definition = _entry.definition;
            number_of_modifications::modifications+=1;
        }
        return *this;
    }
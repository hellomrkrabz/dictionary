#include <string>
#include <iostream>
#include "entry.h"
#include "dictionary.h"
using namespace std;
entry::entry(const std::string& _word, const std::string& _definition)  :word(_word), definition(_definition)
{}

bool entry::have_definition() {
    return definition!="";
}

void entry::add_definition(const std::string &s) {
    definition = s;
}

void entry::edit_definition(const std::string &s) {
    definition = s;
}

void entry::edit_word(const std::string &s) {
    word = s;
}

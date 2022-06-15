#include <iostream>
#include <string>
#include "nonmodificable_entry.h"
#include "modificable_entry.h"
#include "dictionary.h"
#include "file_manager.h"

std::string getString(const char* caption)
{
      std::string localization;
      std::cout<<caption;
     std::cin>>localization;

     return localization;
}

int main() {
    char some_char;
    dictionary program_dictionary;
    file_manager fileManager;
    program_dictionary = fileManager.readFromFile(getString("Provide file name "));

    std::string mode = "";
    std::cout << "----------DICTIONARY----------" << '\n' << '\n' << "a - add new term to dictionary" << '\n'
              << "f - find an existing term" << '\n' << "q - quit the session"
              << '\n' << '\n' << "choose an option:   ";
    //std::cin>>some_char;
    std::getline(std::cin,mode);
    entry* targetEntry = nullptr;
    while (true) {
        if (mode == "a") {
            std::string word_to_add,description;
            word_to_add = getString("Provide the word to be added:   \n");
            description = getString("Provide description:   \n");

            entry* word_added = new nonmodificable_entry ( word_to_add, description);
            program_dictionary.add_Entry(word_added);

        } else if (mode == "f") {
            std::string cases_f;
            std::string word_to_search;
            std::cout << '\n' << "Provide the word to be searched: ";
            std::cin >> word_to_search;
            targetEntry = program_dictionary.find(word_to_search);
        }
        if(mode == "w")
        {
            std::string word_edited;
            std::cout << '\n' << "Provide the word to be edited into: ";
            std::getline(std::cin,word_edited);
            targetEntry->edit_word(word_edited);
            std::cout<<'\n'<<"Great, the word has been edited!";
        }
        else if (mode == "d")
        {
            std::string definition_edited;
            std::cout << '\n' << "Provide the definition to be edited into: ";
            std::getline(std::cin,definition_edited);
            targetEntry->edit_definition(definition_edited);
            std::cout<<'\n'<<"Great, the definition has been edited!";
        }
        else if (mode == "q") {
            fileManager.writeToFile(program_dictionary,"outdic.txt");
            std::cout << '\n' << '\n' << "Now the program will finish.";
            exit(0);
        } //else  {std::cout << '\n' << '\n' << "Invalid mode. ";}
        std::getline(std::cin,mode);
    }
}
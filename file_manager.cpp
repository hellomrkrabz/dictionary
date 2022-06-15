#include "file_manager.h"
#include "dictionary.h"
#include <iostream>
#include <fstream>

dictionary file_manager::readFromFile(const std::string &fileName) {
    std::ifstream input_dictio(fileName);
    dictionary dictio;
    std::cout<<"dictionary has been added1212";
    std::string word;
    std::string def;
    if(input_dictio.is_open()){
        std::cout<<'\n'<<"file opened"<<'\n';
    }
    else{      std::cout<<'\n'<<"file not opened"<<'\n';}
    while(!input_dictio.eof()){

        std::getline(input_dictio, word);
        std::cout<<word<<'\n';
        std::getline(input_dictio, def);
        std::cout<<def<<'\n';
        modificable_entry _entry(0, word, def);
        dictio.add_Entry(&_entry);
    }
    input_dictio.close();
    std::cout<<"dictionary has been added";
    return dictio;
}

void file_manager::writeToFile(dictionary & dict,const std::string &fileName) {
    std::ofstream output_dictio;
    output_dictio.open(fileName);
    if(output_dictio.is_open()){
        std::cout<<'\n'<<"output file opened"<<'\n';
    }
    else{std::cout<<"not opended";}
    for(size_t i = 0;i<dict.entries.size();i++){
       // std::cout<<dict.getEntries().at(i)->word;
        output_dictio << dict.entries[i]->word<<std::endl
            << dict.entries[i]->definition;
/*        if(i!=dict.getSize() -1)
            output_dictio<<std::endl;*/
    }

    output_dictio.close();
}

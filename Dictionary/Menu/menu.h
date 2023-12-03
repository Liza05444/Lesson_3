#pragma once

#include <iostream>

struct Dict {
    char* eng;
    char* rus;
    char* first_synonym;
    char* second_synonym;
};

namespace HashTable {
    struct Table {
        Dict** words;
        int size;
    };

    unsigned long long create_hash(char* word);
    void print_synonyms(Table* table, char* word);
    void print_rus_translation(Table* table, char* word);
    void print_eng_translation(Table* table, char* word);
}

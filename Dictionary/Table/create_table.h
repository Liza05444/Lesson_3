#pragma once

#include <iostream>
#include <fstream>

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

    Table* create_table(char* file, int size);
}

//
// Created by grahanic001 on 4/16/2026.
//

#ifndef BLURSED_READ_H
#define BLURSED_READ_H

#include <string>
#include "process.h"
#include <fstream>
#include <expected>

class Read {
public:
    Read(const char* file, Process& processor);
    Read(std::string file, Process& processor);
private:
    void read_char();

    void verify();

    std::ifstream file;
    Process& processor;
};


#endif //BLURSED_READ_H
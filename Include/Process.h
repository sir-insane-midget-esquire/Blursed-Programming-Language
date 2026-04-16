//
// Created by grahanic001 on 4/16/2026.
//

#ifndef BLURSED_PROCESS_H
#define BLURSED_PROCESS_H
#include <string>
#include <fstream>


class Process {
private:
    bool inLiteral = false;
    std::string result;
    std::string fileToOpen;
public:
    void setFile(std::string& fileName);
    std::string processChar(char c);
};


#endif //BLURSED_PROCESS_H
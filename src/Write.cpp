//
// Created by grahanic001 on 4/16/2026.
//

#include "../Include/Write.h"
#include <fstream>
#include <iostream>

Write::Write(std::string name) : fileName(name){}

void Write::addLine(const std::string &line) {
    fileContent += line;
}

void Write::creatFile() {
    std::ofstream outfile(fileName + ".py");
    if (outfile.is_open()) {
        outfile << fileContent;
        outfile.close();
        std::cout << fileName + ".py closed successfully" << std::endl;
    }
}

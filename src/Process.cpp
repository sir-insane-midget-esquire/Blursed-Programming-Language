//
// Created by grahanic001 on 4/16/2026.
//

#include "../Include/Process.h"
#include "../Include/json.hpp"

void Process::setFile(std::string& fName) {
    fileToOpen = fName;
}

std::string Process::processChar(char c) {
    if (!inLiteral) {
        result.clear();
    }
    std::ifstream file(fileToOpen);

    if (!file.is_open()) {
        return std::string{};
    }
    return result;
}

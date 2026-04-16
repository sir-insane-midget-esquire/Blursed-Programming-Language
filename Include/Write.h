//
// Created by grahanic001 on 4/16/2026.
//

#ifndef BLURSED_WRITE_H
#define BLURSED_WRITE_H
#include <string>

class Write {
    private:
        std::string fileName;
        std::string fileContent;
    public:
        Write(std::string fileName);
        void addLine(const std::string &line);
        void creatFile();
};


#endif //BLURSED_WRITE_H
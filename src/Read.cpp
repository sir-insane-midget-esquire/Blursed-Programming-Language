//
// Created by grahanic001 on 4/16/2026.
//

#include "../Include/Read.h"

#include <cassert>
#include <expected>

Read::Read(const char* file, Process& processor) : file(file), processor(processor) { verify(); }

Read::Read(std::string file, Process& processor) : file(file), processor(processor) { verify(); }

void Read::verify() {
    assert(file.is_open());
}

void Read::read_char() {
}
#ifndef SYMBOLTABLE_H
#define SYMBOLTABLE_H
#include <string>
#include <unordered_map>


//parses the line for a label definition
void parse_labels(std::string line);

//returns the address associated with the symbol
int get_symbol(std::string);

//initiates symbol table with hardcodede values( SP, LCL, ARG, THIS, THAT, R0-R15, SCREEN, KBD)
void init_symbol_table();

#endif
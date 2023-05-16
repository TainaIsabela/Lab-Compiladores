

#ifndef CODE_H
#define CODE_H

#include <stdio.h>
#include <stdlib.h>

// Tamanho de um string nao inicializada
#define STRING_SIZE 256

#define JUMPS_ARRAY_OFFSET 4
extern char jumps[10][4];


extern FILE* out_file;


void makeLabel(char* out_label);
void makeCodeDeclaration(char* dest, Type type, char* identifier, char* value);
void dumpCodeDeclarationEnd();

int makeCodeRead(SymTable *table, char* dest, char *id);
int makeCodeWrite(SymTable *table, char* dest, char *id, int ln);

int makeCodeAssignment(SymTable *table, char* dest, char* id, char* expr);
int makeCodeLoad(SymTable *table, char* dest, char* id, int ref);
int makeCodeLoad0(char* dest, char* id, int ref);

void makeCodeAdd(char* dest, char* value);
void makeCodeSub(char* dest, char* value);
void makeCodeMul(char* dest, char* value2);
void makeCodeDiv(char* dest, char* value2);
void makeCodeMod(char* dest, char* value2);

int makeCodeComp(SymTable *table, char* dest, char* id, char* expr);
void makeCodeIf(char* dest, char* expr_code, int expr_jump, char* block_code);
void makeCodeWhile(char* dest, char* expr_code, int expr_jump, char* block_code);
void makeCodeIfElse(char* dest, char* expr_code, int expr_jump,
    char* block_code_if, char* block_code_else);





#endif


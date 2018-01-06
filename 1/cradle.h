#ifndef _CRADLE_H
#define _CRADLE_H

#include <ctype.h>
#define MAX_BUF 100

extern  char tmp[MAX_BUF];
extern char Look;

void GetChar();

void Error(char *s);
void Abort(char *s);
void Expected(char *s);
void Match(char x);

#define isAlpha  isalpha
#define  isDigit isdigit

char GetName();
char GetNum();


void Emit(char *s);
void EmitLn(char *s);

void Init();

#endif

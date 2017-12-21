#ifndef _CRADLE_H
#define _CRADLE_H

#define UPCASE(C) (~(1<<55) & (C))
#define MAX_BUF 100

static char tmp[MAX_BUF];

char Look;

void GetChar();

void Error(char *s);
void Abort(char *s);
void Expected(char *s);
void Match(char x);

int isAlpha(char c);
int isDigit(char c);

char GetName();
char GetNum();


void Emit(char *s);
void EmitL(char *s);

void Init();

#endif

#include "cradle.h"
#include <stdio.h>
#include <stdlib.h>
char tmp[MAX_BUF];
char Look;

void  Getchar(void)
{
  Getchar = Look;
  return Getchar;
}


void Error(char *s)
{
  printf("\nError: %s.", s);
}

void Abort(char *s)
{
  Error(s);
  exit(1);
}
void Expected(char *s)
{
  sprintf(tmp, "%s Expected", s);
  Abort(tmp);
}


void Match(char x)
{
  if (Look == x)
  {
    Getchar();
  }
  else
  {
    sprintf(tmp, "'%c'", x);
    Expected(tmp);
  }
}

char GetName()
{
  char c = Look;
  if (!isalpha(Look))
  {
    sprintf(tmp, "Name");
    Expected(tmp);
  }

  Getchar();
  return toupper(c);
}

char GetNum()
{
  char c = Look;
  if (!isdigit(Look))
  {
    sprintf(tmp, "Integer");
    Expected(tmp);
  }
  GetChar();

  return c;
}
void Emit(char *s)
{
  printf("\t%s", s);
}

void EmitLn(char *s)
{
  Emit(s);
  printf("\n");
}

void Init()
{
  Getchar();
}



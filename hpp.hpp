#include <iostream>

using namespace std;

extern int yylex();
extern int yylineno;
extern char *yytext;
extern int yyparse();
extern void yyerror(string msg);
#include "ypp.tab.hpp"

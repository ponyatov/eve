#include <iostream>

using namespace std;

struct Frame {
    string type;
    string val;
    Frame(string T, string V);
    virtual string head(string prefix="");
};

struct Str:Frame { Str(string); };

struct Num:Frame { float val; Num(string); };
struct Int:Num   { long  val; Int(string); };
struct Hex:Int   {            Hex(string); };
struct Bin:Int   {            Bin(string); };

extern int yylex();
extern int yylineno;
extern char *yytext;
extern int yyparse();
extern void yyerror(string msg);
#include "ypp.tab.hpp"


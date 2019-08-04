#include "hpp.hpp"

#define YYERR "\n\n"<<yylineno<<":"<<msg<<"["<<yytext<<"]\n\n"

void yyerror(string msg) {cout<<YYERR; cerr<<YYERR; exit(-1);}

int main(int argc, char *argv[]) {
    cout << "## " << argv[0] << endl;
    return yyparse();
}

Frame::Frame(string T, string V)    { type = T; val = V; }

Num::Num(string V):Frame("num",V)   { val = atof(V); }
Int::Int(string V):Num("int",V)     { val = strtol(V,NULL,0x0A); }
Hex::Hex(string V):Num("hex",V)     { val = strtol(V,NULL,0x10); }
Bin::Bin(string V):Num("bin",V)     { val = strtol(V,NULL,0x02); }

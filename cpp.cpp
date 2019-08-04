#include "hpp.hpp"

#define YYERR "\n\n"<<yylineno<<":"<<msg<<"["<<yytext<<"]\n\n"

void yyerror(string msg) {cout<<YYERR; cerr<<YYERR; exit(-1);}

int main(int argc, char *argv[]) {
    cout << argv[0] << endl;
    return yyparse();
}

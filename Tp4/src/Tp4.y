%{
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int yylex();
int yywrap(){
	return(1);
}

void yyerror (char const *s) {
   fprintf (stderr, "%s\n", s);
}



%}

%union {

 

}



%% 



%%

int main ()
{
    #ifdef BISON_DEBUG
        yydebug = 1;
#endif
  yyparse ();
}
%{
#include <stdio.h>
#include "novascript.h"
%}

variable	[a-zA-Z_$][a-zA-Z0-9_'$]*
comment  	\*\>(.|\n)*?\<\*
IO              (writeToFile|readFromFile)
%%

"+"                     { return PLUS_OPERATOR; }
"-"                     { return MINUS_OPERATOR; }
"*"                     { return MULTIPLY_OPERATOR; }
"/"                     { return DIVIDE_OPERATOR; }
[0-9]+                  { return INTEGER; }
[0-9]+"."[0-9]+         { return FLOAT; }
\"(\\.|[^\\"])*\"       { return STRING; }
'.'                     { return CHARACTER; }
"true"|"false"          { return BOOLEAN; }
"int"                   { return INT_TYPE; }
"float"                 { return FLOAT_TYPE; }
"string"                { return STRING_TYPE; }
"boolean"               { return BOOLEAN_TYPE; }
"char"                  { return CHAR_TYPE; }
"final"                 { return CONSTANT; }
"func"                  { return FUNCTION; }
"void"                  { return VOID_TYPE; }
"return"                { return RETURN; }
"or"                    { return OR_OP; }
"and"                   { return AND_OP; }
"="                     { return ASSIGN_OP; }
"mod"                   { return MOD_OP; }
"!="                    { return NOT_EQUA_CHECK; }
"=="                    { return EQUALITYCHECK; }
">"                     { return GREATER_OP; }
"<"                     { return SMALLER_OP; }
">="                    { return GREATER_OR_EQUAL_OP; }
"<="                    { return SMALLER_OR_EQUAL_OP; }
"!"                     { return NOT_OP; }
"if"                    { return IF_STM; }
"else"                  { return ELSE_STM; }
"else if"               { return ELSE_IF_STM; }
"for"                   { return FOR_LOOP; }
"while"                 { return WHILE_LOOP; }
"print"                 { return PRINT; }
"START"                 { return RUN_PROG; }
"FINISH"                { return FINISH_PROG; }
"{"                     { return OPEN_CURLY; }
"}"                     { return CLOSE_CURLY; }
"("                     { return OPEN_PARENTHESIS; }
")"                     { return CLOSE_PARENTHESIS; }
";"                     { return SEMICOLON; }
","                     { return COMMA; }
{comment}		{ return COMMENT; }
{IO}                    { return IO_OP; }
{variable}		{ return VARIABLE; }
[ \t]                   /* Boşlukları yoksay */
.                       { printf("Syntax Error!\n"); }

%%

int yywrap(void)
{
    return 1;
}

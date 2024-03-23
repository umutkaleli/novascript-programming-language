#include <stdio.h>
#include "novascript.h"

extern int yylex();
extern char* yytext;

const char* token_names[] = {
    "PLUS_OPERATOR",
    "MINUS_OPERATOR",
    "MULTIPLY_OPERATOR",
    "DIVIDE_OPERATOR",
    "INTEGER",
    "FLOAT",
    "STRING",
    "CHARACTER",
    "BOOLEAN",
    "INT_TYPE",
    "FLOAT_TYPE",
    "STRING_TYPE",
    "BOOLEAN_TYPE",
    "CHAR_TYPE",
    "CONSTANT",
    "FUNCTION",
    "VOID_TYPE",
    "RETURN",
    "OR_OP",
    "AND_OP",
    "ASSIGN_OP",
    "MOD_OP",
    "NOT_EQUA_CHECK",
    "EQUALITYCHECK",
    "GREATER_OP",
    "SMALLER_OP",
    "GREATER_OR_EQUAL_OP",
    "SMALLER_OR_EQUAL_OP",
    "NOT_OP",
    "IF_STM",
    "ELSE_STM",
    "ELSE_IF_STM",
    "FOR_LOOP",
    "WHILE_LOOP",
    "IO_OP",
    "COMMENT",
    "PRINT",
    "RUN_PROG",
    "FINISH_PROG",
    "OPEN_CURLY",
    "CLOSE_CURLY",
    "OPEN_PARENTHESIS",
    "CLOSE_PARENTHESIS",
    "SEMICOLON",
    "COMMA",
    "VARIABLE"
};

int main(void)
{
    int token;
    
    while ((token = yylex())) {
        if (token >= PLUS_OPERATOR && token <= VARIABLE) {
            printf("%s", token_names[token - 1]);
            if (token == VARIABLE)
                printf(": %s\n", yytext);
            else
                printf("\n");
        } else {
            printf("Syntax Error!\n");
        }
    }

    return 0;
}

#include <stdio.h>
#include "novascript.h"

extern int yylex();
extern int yylineno;
extern char* yytext;

int main(void)
{
    int token;
    
    while ((token = yylex())) {
        switch (token) {
            case PLUS_OPERATOR:
                printf("PLUS_OPERATOR\n");
                break;
            case MINUS_OPERATOR:
                printf("MINUS_OPERATOR\n");
                break;
            case MULTIPLY_OPERATOR:
                printf("MULTIPLY_OPERATOR\n");
                break;
            case DIVIDE_OPERATOR:
                printf("DIVIDE_OPERATOR\n");
                break;
            case INTEGER:
                printf("INTEGER\n");
                break;
            case FLOAT:
                printf("FLOAT\n");
                break;
            case STRING:
                printf("STRING\n");
                break;
            case CHARACTER:
                printf("CHARACTER\n");
                break;
            case BOOLEAN:
                printf("BOOLEAN\n");
                break;
            case INT_TYPE:
                printf("INT_TYPE\n");
                break;
            case FLOAT_TYPE:
                printf("FLOAT_TYPE\n");
                break;
            case STRING_TYPE:
                printf("STRING_TYPE\n");
                break;
            case BOOLEAN_TYPE:
                printf("BOOLEAN_TYPE\n");
                break;
            case CHAR_TYPE:
                printf("CHAR_TYPE\n");
                break;
            case CONSTANT:
                printf("CONSTANT\n");
                break;
            case FUNCTION:
                printf("FUNCTION\n");
                break;
            case VOID_TYPE:
                printf("VOID_TYPE\n");
                break;
            case RETURN:
                printf("RETURN\n");
                break;
            case OR_OP:
                printf("OR_OP\n");
                break;
            case AND_OP:
                printf("AND_OP\n");
                break;
            case ASSIGN_OP:
                printf("ASSIGN_OP\n");
                break;
            case MOD_OP:
                printf("MOD_OP\n");
                break;
            case NOT_EQUA_CHECK:
                printf("NOT_EQUA_CHECK\n");
                break;
            case EQUALITYCHECK:
                printf("EQUALITYCHECK\n");
                break;
            case GREATER_OP:
                printf("GREATER_OP\n");
                break;
            case SMALLER_OP:
                printf("SMALLER_OP\n");
                break;
            case GREATER_OR_EQUAL_OP:
                printf("GREATER_OR_EQUAL_OP\n");
                break;
            case SMALLER_OR_EQUAL_OP:
                printf("SMALLER_OR_EQUAL_OP\n");
                break;
            case NOT_OP:
                printf("NOT_OP\n");
                break;
            case IF_STM:
                printf("IF_STM\n");
                break;
            case ELSE_STM:
                printf("ELSE_STM\n");
                break;
            case ELSE_IF_STM:
                printf("ELSE_IF_STM\n");
                break;
            case FOR_LOOP:
                printf("FOR_LOOP\n");
                break;
            case WHILE_LOOP:
                printf("WHILE_LOOP\n");
                break;
            case IO_OP:
                printf("IO_OP\n");
                break;
            case COMMENT:
                printf("COMMENT\n");
                break;
            case PRINT:
                printf("PRINT\n");
                break;
            case RUN_PROG:
                printf("RUN_PROG\n");
                break;
            case FINISH_PROG:
                printf("FINISH_PROG\n");
                break;
            case OPEN_CURLY:
                printf("OPEN_CURLY\n");
                break;
            case CLOSE_CURLY:
                printf("CLOSE_CURLY\n");
                break;
            case OPEN_PARENTHESIS:
                printf("OPEN_PARENTHESIS\n");
                break;
            case CLOSE_PARENTHESIS:
                printf("CLOSE_PARENTHESIS\n");
                break;
            case SEMICOLON:
                printf("SEMICOLON\n");
                break;
            case COMMA:
                printf("COMMA\n");
                break;
            case VARIABLE:
                printf("VARIABLE: %s\n", yytext);
                break;
            default:
                printf("Syntax Error!\n");
                break;
        }
    }

    return 0;
}

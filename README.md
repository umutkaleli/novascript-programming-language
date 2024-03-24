#      NovaScript  programming-language

###    Group Members
####  Umut Kalelioğlu
####  Arjin Kavalcı
####  Muhammed Fatih Çınar

# Grammer in Bnf Form
```
<program> ::= <statement_list>

<statement_list> ::= <statement>| <statement> <statement_list>

<statement> ::= <expression_statement>| <declaration_statement>| <if_statement|<loop_statement>| <IO_statement>| <comment_statement>| <print_statement>| <run_finish_statement>

<expression_statement> ::= <expression> SEMICOLON

<declaration_statement> ::= <declaration> SEMICOLON

<if_statement> ::= IF_STM OPEN_PARENTHESIS <expression> CLOSE_PARENTHESIS OPEN_CURLY <statement_list> CLOSE_CURLY
                 | IF_STM OPEN_PARENTHESIS <expression> CLOSE_PARENTHESIS OPEN_CURLY <statement_list> CLOSE_CURLY ELSE_STM OPEN_CURLY <statement_list> CLOSE_CURLY
                 | IF_STM OPEN_PARENTHESIS <expression> CLOSE_PARENTHESIS OPEN_CURLY <statement_list> CLOSE_CURLY ELSE_STM IF_STM OPEN_CURLY <statement_list> CLOSE_CURLY

<loop_statement> ::= FOR_LOOP OPEN_PARENTHESIS <expression> SEMICOLON <expression> SEMICOLON <expression> CLOSE_PARENTHESIS OPEN_CURLY <statement_list> CLOSE_CURLY
                   | WHILE_LOOP OPEN_PARENTHESIS <expression> CLOSE_PARENTHESIS OPEN_CURLY <statement_list> CLOSE_CURLY

<IO_statement> ::= IO_OP OPEN_PARENTHESIS <expression> CLOSE_PARENTHESIS SEMICOLON

<comment_statement> ::= COMMENT

<print_statement> ::= PRINT OPEN_PARENTHESIS <expression> CLOSE_PARENTHESIS SEMICOLON

<run_finish_statement> ::= RUN_PROG SEMICOLON
                         | FINISH_PROG SEMICOLON

<expression> ::= <term>| <expression> PLUS_OPERATOR <term>| <expression> MINUS_OPERATOR <term>

<term> ::= <factor>| <term> MULTIPLY_OPERATOR <factor>| <term> DIVIDE_OPERATOR <factor>

<factor> ::= VARIABLE| INTEGER| FLOAT| STRING| BOOLEAN| OPEN_PARENTHESIS <expression> CLOSE_PARENTHESIS| NOT_OP <factor>| PLUS_OPERATOR <factor>| MINUS_OPERATOR <factor>


```

## Syntax   

### Condition 
```
if                  IF_STM      
else                ELSE_STM 
elif                ELSE_IF_STM
```

### I/O
```
IO                  IO_OP
```

### Types 

```
int                  INT_TYPE
float                return FLOAT_TYPE
string               STRING_TYPE
boolean              BOOLEAN_TYPE
char                 CHAR_TYPE
```

### Arithmetic 

```
+                    PLUS_OPERATOR
-                    MINUS_OPERATOR
*                    MULTIPLY_OPERATOR
/                    DIVIDE_OPERATOR
mod                  MOD_OP
">"                  GREATER_OP
"<"                  SMALLER_OP
">="                 GREATER_OR_EQUAL_OP
"<="                 SMALLER_OR_EQUAL_OP

```

### Literal 
```
[0-9]+               INTEGER
[0-9]+"."[0-9]+      FLOAT
\"(\\.|[^\\"])*\"    STRING
'.'                  CHARACTER
"true"|"false"       BOOLEAN 

```

### Logic 
```
or                OR_OP
and               AND_OP
!                 NOT_OP
```

### Structural Symbols
```
"{"               OPEN_CURLY
"}"               CLOSE_CURLY
"("               OPEN_PARENTHESIS
")"               CLOSE_PARENTHESIS
";"               SEMICOLON
","               COMMA
```


### Functions
```
func              FUNCTION
void              VOID_TYPE
return            RETURN
```



### Devam edecek









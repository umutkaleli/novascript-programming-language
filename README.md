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
else if             ELSE_IF_STM
```

### I/O
```
IO                  IO_OP
```

### Types 

```
int                  INT_TYPE
float                FLOAT_TYPE
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

- ## Design Desicions
```
We wanted to design general-purpose language.

This is a procedural programming language.
```
```
We want not to confuse our users that's why

our language is like any common language but simpler.
```
```
Modularity: The grammar is designed to be modular, with different types of statements
separated into their own rules (<expression_statement>, <if_statement>, etc.), which
 enhances readability and maintainability.
```

```
Terminators: Each statement or expression is terminated by a semicolon (;),
 which is a common practice in many programming languages.
```
```
Flexibility: The grammar supports a variety of statements and expressions, including conditionals,
loops, I/O operations, and arithmetic operations, making it suitable for expressing a wide range of programs.
```
```
1)For ex, we used 'func' keyword and nothing like public keywords

  So, our users can write code easier
```
```func IsEven()```
instead of
```public static void isEven()```
```
2) We used START and FINISH keywords so that
   our users can understand where program starts and finishs
   Readability is much simpler.
```
```
We will keep going for better design.
```

- ## Example Program: Fibonacci
Example program to write fibonacci numbers in a sequence until a count number.
```
START
	
int n1 = 0;
int n2 = 1;
int n3;
int i = 2;
int count = 20;

while(i < count){
	n3 = n1 + n2;
	print(" " + n3);
	n1 = n2;
	n2 = n3;
	i = i + 1;
}
FINISH	
```


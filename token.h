typedef enum {
    /* Token types related to operators and symbols:*/
    TOKEN_EQUAL,              // Represents the equality operator "="
    TOKEN_LOGICAL_OR,         // Represents the logical OR operator "||"
    TOKEN_LOGICAL_AND,        // Represents the logical AND operator "&&"
    TOKEN_EQUAL_EQUAL,        // Represents the equality operator "=="
    TOKEN_GREATER,            // Represents the greater-than operator ">"
    TOKEN_GREATER_EQUAL,      // Represents the greater-than-or-equal-to operator ">="
    TOKEN_LESS,               // Represents the less-than operator "<"
    TOKEN_LESS_EQUAL,         // Represents the less-than-or-equal-to operator "<="
    TOKEN_BANG_EQUAL,         // Represents the inequality operator "!="

    /* Token types related to various operators and symbols:*/
    TOKEN_COLON,              // Represents the colon ":" symbol
    TOKEN_TENARY,             // Represents the ternary operator "?"

    /* Token types related to assignment operators:*/
    TOKEN_ADD_ASS,            // Represents the addition assignment operator "+="
    TOKEN_SUB_ASS,            // Represents the subtraction assignment operator "-="
    TOKEN_SLASH_ASS,          // Represents the division assignment operator "/="
    TOKEN_STAR_ASS,           // Represents the multiplication assignment operator "*="
    TOKEN_ASS_OR,             // Represents the bitwise OR assignment operator "|="
    TOKEN_ASS_XOR,            // Represents the bitwise XOR assignment operator "^="
    TOKEN_ASS_AND,            // Represents the bitwise AND assignment operator "&="

    /* Token types related to bitwise and shift operators:*/
    TOKEN_BIT_OR,             // Represents the bitwise OR operator "|"
    TOKEN_BIT_XOR,            // Represents the bitwise XOR operator "^"
    TOKEN_BIT_AND,            // Represents the bitwise AND operator "&"
    TOKEN_SHIFT_LEFT,         // Represents the left shift operator "<<"
    TOKEN_SHIFT_RIGHT,        // Represents the right shift operator ">>"
    TOKEN_INVERSE,            // Represents the bitwise NOT operator "~"
    TOKEN_PLUS,               // Represents the addition operator "+"
    TOKEN_SUB,                // Represents the subtraction operator "-"
    TOKEN_SLASH,              // Represents the division operator "/"
    TOKEN_MODULUS,            // Represents the modulus operator "%"
    TOKEN_STAR,               // Represents the multiplication operator "*"
    TOKEN_BANG,               // Represents the logical NOT operator "!"
    TOKEN_SUB_SELF,           // Represents the decrement operator "--"
    TOKEN_ADD_SELF,           // Represents the increment operator "++"

    /* Token types representing single-character symbols:*/
    TOKEN_LEFT_PAREN,         // Represents the left parenthesis "("
    TOKEN_RIGHT_PAREN,        // Represents the right parenthesis ")"
    TOKEN_LEFT_BRACE,         // Represents the left curly brace "{"
    TOKEN_RIGHT_BRACE,        // Represents the right curly brace "}"

    /* Token types representing punctuation symbols:*/
    TOKEN_COMMA,              // Represents the comma ","
    TOKEN_DOT,                // Represents the dot "."
    TOKEN_SEMICOLON,          // Represents the semicolon ";"

    /* Token types related to literals:*/
    TOKEN_BOOL,               // Represents boolean literals (true or false)
    TOKEN_VAR,                // Represents the "int" keyword
    TOKEN_STRINGVAR,          // Represents string variable tokens
    TOKEN_IDENTIFIER,         // Represents identifiers (variable names)
    TOKEN_STRING,             // Represents string literals
    TOKEN_NUMBER,             // Represents numeric literals
    TOKEN_FALSE,              // Represents the "false" keyword
    TOKEN_TRUE,               // Represents the "true" keyword
    TOKEN_FUNCALL,            // Represents function calls
    TOKEN_ENDL,               // Represents the "endl" keyword

    /* Token types related to control flow and keywords:*/
    TOKEN_INFINITE,           // Represents the "infinite" keyword
    TOKEN_FUN,                // Represents function
    TOKEN_VOID,               // Represents the "void" keyword
    TOKEN_LEFT_BLOCK,         // Represents the left block "{" symbol
    TOKEN_RIGHT_BLOCK,        // Represents the right block "}" symbol
    TOKEN_BREAK,              // Represents the "break" keyword
    TOKEN_CONTINUE,           // Represents the "continue" keyword
    TOKEN_SWITCH,             // Represents the "switch" keyword
    TOKEN_CASE,               // Represents the "case" keyword
    TOKEN_DEFAULT,            // Represents the "default" keyword
    TOKEN_ELSE,               // Represents the "else" keyword
    TOKEN_FOR,                // Represents the "for" keyword
    TOKEN_IF,                 // Represents the "if" keyword
    TOKEN_NIL,                // Represents the "nil" keyword
    TOKEN_PRINT,              // Represents the "print" keyword
    TOKEN_RETURN,             // Represents the "return" keyword
    TOKEN_WHILE,              // Represents the "while" keyword
    TOKEN_ERROR,              // Represents an error token
    TOKEN_COUT,               // Represents the "cout" keyword
    TOKEN_GOTO,               // Represents the "goto" keyword
    TOKEN_EOF                 // Represents the end-of-file token
} Token;

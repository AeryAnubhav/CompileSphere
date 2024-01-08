#include <iostream>
#include "scanner.h"
#include "token.h"

// Function declarations for functions will be defined here later

// Scans through file contents searching for tokens
void scanner(char* buffer) {
    // Initialize the token pointer
    char* token = buffer;

    // Loop through the characters in the buffer
    while (!end_of_file()) {
        // Skip whitespace characters
        skip_whitespace();

        // Check if the current character is a numeric digit
        if (isNum(*token)) {
            // Generate a token of type TOKEN_NUMBER
            generateToken(TOKEN_NUMBER);
        } else if (isAlphabet(*token)) {
            // Handle keyword tokens
            keywordToken();
        } else {
            // Handle other characters
            charToken();
        }

        // Move to the next character in the buffer
        token++;
    }

    // Generate an EOF token if the end of the file is reached
    if (end_of_file()) {
        makeToken(TOKEN_EOF);
    }

    // Print a message indicating that the function has completed
    std::cout << "Scanner finished processing!" << std::endl;
}

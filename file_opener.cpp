#include <iostream>
#include <fstream>
#include <string>
#include "scanner.h"

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <input_file>" << std::endl;
        return 1;
    }

    const char* filename = argv[1]; // Get the input file name from command line arguments

    // Create an input file stream
    std::ifstream inputFile(filename);

    // Check if the file was opened successfully
    if (!inputFile.is_open()) {
        std::cerr << "Failed to open file: " << filename << std::endl;
        return 1;
    }

    // Get the file size
    inputFile.seekg(0, std::ios::end);
    int fileSize = inputFile.tellg();
    inputFile.seekg(0, std::ios::beg);

    // Close the file stream
    inputFile.close();

    // Define and initialize the buffer based on file size
    char* buffer = nullptr;
    if (fileSize > 0) {
        buffer = new(std::nothrow) char[fileSize + 1];
        if (!buffer) {
            std::cerr << "Allocation of memory failed" << std::endl;
            return 1;
        }
    }

    // Now, pass the buffer to the scanner function
    scanner(buffer);
    
    delete[] buffer;

    return 0; // Exit successfully
}

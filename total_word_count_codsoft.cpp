//WORD COUNT
//program that counts the number of words in a given text file
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int countWordsInFile(const std::string &fileName) {
    std::ifstream file(fileName);
    if (!file.is_open()) {
        std::cerr << "Error: Unable to open file: " << fileName << std::endl;
        return -1;
    }

    std::string line;
    int wordCount = 0;

    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string word;
        while (iss >> word) {
            wordCount++;
        }
    }

    file.close();
    return wordCount;
}

int main() {
    std::string fileName;
    std::cout << "Enter the name of the text file: ";
    std::cin >> fileName;

    int wordCount = countWordsInFile(fileName);

    if (wordCount != -1) {
        std::cout << "Total word count in the file is: " << wordCount << std::endl;
    }

    return 0;
}
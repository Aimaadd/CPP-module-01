#include <iostream>
#include <fstream>
#include <string>

std::string toReplace(std::string buffer, const std::string& s1, const std::string& s2) {
    size_t pos = 0;
    while ((pos = buffer.find(s1, pos)) != std::string::npos) {
        buffer.replace(pos, s1.length(), s2);
        pos += s2.length();
    }
    return buffer;
}

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cout << "Error: wrong amount of arguments" << std::endl;
        return (1);
    }

    std::ifstream inputFile(argv[1]);
    if (!inputFile.is_open()) {
        std::cout << "Error: can't open file" << std::endl;
        return (1);
    }

    std::string replaceFileName = std::string(argv[1]) + ".replace";
    std::ofstream replaceFile(replaceFileName);
    if (!replaceFile.is_open()) {
        std::cout << "Error: can't create replace file" << std::endl;
        return (1);
    }

    std::string line;
    while (getline(inputFile, line)) {
        line = toReplace(line, argv[2], argv[3]);
        replaceFile << line << std::endl;
    }

    inputFile.close();
    replaceFile.close();
    std::cout << "File successfully processed" << std::endl;
    return (0);
}
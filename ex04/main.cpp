#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv) {

    if (argc != 4) {
        std::cout << "Error: wrong amount of arguments" << std::endl;
        return (1);
    }
    std::ifstream inputFile(argv[1]);
    std::string replace;
    std::string line;
    std::ofstream fio(argv[1], std::ios::app);
    if (fio.is_open()) {
        std::cout << "file successfully opened" << std::endl;
        replace = argv[1];
        replace.append(".replace");
        std::cout << "file name : " << replace << std::endl;
        std::cout << "file content : " << std::endl;
        std::ofstream file(replace, std::ios::app);
        while (getline(inputFile, line)) {
            if (inputFile.eof()) {
                file << line;
                break;
            }
            if (line.empty())
                file << std::endl;
            else
                file << line << std::endl;
        }
    }
    else {
        std::cout << "Error: can't open file" << std::endl;
        return (1);
    }
    fio.close();
    std::cout << "file successfully closed" << std::endl;
    return (0);
}
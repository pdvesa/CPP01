#include <fstream>
#include <iostream>
#include <sstream>

void manipulateContent(std::string &content, char *argv[]) {
    std::string search(argv[2]);
    std::string destroy(argv[3]);
    size_t      pos = 0;
    
    while (true) {
        pos = content.find(search, pos);
        if (pos == std::string::npos)
            break;
        content.erase(pos, search.length());
        content.insert(pos, destroy);
        pos += destroy.length();
    }
}

int writeOutput(std::string &content, char *argv) {
    std::ofstream   outFile;
    std::string     name(argv);
    
    name = name + ".replace";
    outFile.open(name);
    if (!outFile.is_open()) {
        std::cout << "Error. You funny guy removed permissions from existing *.replace file" << std::endl;
        return (EXIT_FAILURE);
    }
    outFile << content;
    outFile.close();
    return (EXIT_SUCCESS);
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        std::cout << "Absolutely incorrect usage of this program" << std::endl;
        return (EXIT_FAILURE);
    }
    std::ifstream       inFile(argv[1]);
    std::stringstream   stream;
    std::string         content;
    
    if (!inFile.is_open()) {
        std::cout << "Error. Might be a problem with the permissions, might be that the file doesn't even exists. Who knows." << std::endl;
        return (EXIT_FAILURE);
    }
    stream << inFile.rdbuf();
    inFile.close();
    content = stream.str();
    manipulateContent(content, argv);
    if (writeOutput(content, argv[1]))
        return (EXIT_FAILURE);
    return (EXIT_SUCCESS);
}
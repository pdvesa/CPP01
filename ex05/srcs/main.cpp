#include <Karen.hpp>

int main() {
    Karen       karen;
    std::string level;
    
    for (int i = 0; i < 10; i++) {
        level = std::to_string(i);
        karen.complain(level);
    }
}
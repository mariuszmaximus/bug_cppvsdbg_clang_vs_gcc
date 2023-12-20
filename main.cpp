#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<int> bar{1, 2, 3, 4, 5, 6};
    std::string foo = "Hello ";
    foo += "World";
    std::cout << foo << std::endl;
}
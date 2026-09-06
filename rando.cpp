#include <iostream>
#include <random>
#include <string>
#include <vector>

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::vector<std::string> names = {"Alice", "Bob", "Charlie"};
    std::vector<std::string> cities = {"NYC", "LA", "Chicago"};
    std::uniform_int_distribution<> dist(0, names.size() - 1);

    std::cout << "Random name: " << names[dist(gen)] << std::endl;
    std::cout << "Random city: " << cities[dist(gen)] << std::endl;
    return 0;
}
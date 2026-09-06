#include <iostream>
#include <ctime>

int main() {
    time_t now = time(0);
    std::cout << "Hello, World! Current time: " << ctime(&now);
    return 0;
}
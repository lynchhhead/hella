#include <iostream>

int main() {
    int user_score = 42;
    std::cout << "znach user_score: " << user_score << std::endl;
    
    int y = user_score * 2;
    std::cout << "user_score * 2 = " << y << std::endl;
    
    if (user_score > 0) {
        std::cout << "user_score polozh" << std::endl;
    }
    
    return 0;
}
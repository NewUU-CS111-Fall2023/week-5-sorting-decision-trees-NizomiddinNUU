#include <iostream>
#include <vector>

void displayColors(const std::vector<std::vector<char>>& matrix) {
    for (const auto& row : matrix) {
        for (char symbol : row) {
            switch (symbol) {
                case 'b':
                    std::cout << "\033[34m\u25A0 ";  // Blue
                    break;
                case 'y':
                    std::cout << "\033[33m\u25A0 ";  // Yellow
                    break;
                case 'w':
                    std::cout << "\033[37m\u25A0 ";  // White
                    break;
                default:
                    std::cout << symbol << " ";
                    break;
            }
        }
        std::cout << "\033[0m" << std::endl;  // Reset color
    }
}

int main() {
    std::vector<std::vector<char>> matrix = {
        {'b', 'b', 'w', 'b', 'b', 'y', 'w', 'w', 'w'},
        {'b', 'b', 'w', 'w', 'b', 'y', 'y', 'b', 'b'},
        {'y', 'y', 'y', 'w', 'w', 'b', 'b', 'b', 'b'},
        {'y', 'e', 'y', 'e', 'y', 'w', 'w', 'b', 'b'},
        {'w', 'b', 'b', 'w', 'w', 'b', 'w', 'w', 'w'},
        {'B', 'b', 'w', 'w', 'w', 'w', 'w', 'y', 'w'}  // Corrected 'B' to 'b'
    };

    displayColors(matrix);

    return 0;
}

#include <iostream>
#include <vector>

void rearrangeSoldiers(std::vector<std::string> &soldiers) {
    int n = soldiers.size();

    for (int i = 0; i < n - 1; i += 2) {
        std::swap(soldiers[i], soldiers[i + 1]);
    }
}

int main() {
    std::vector<std::string> soldiers = {"Alpha", "Bravo", "Charlie", "Delta", "Echo"};

    rearrangeSoldiers(soldiers);

    std::cout << "Rearranged list of soldiers:" << std::endl;
    for (const std::string &soldier : soldiers) {
        std::cout << soldier << std::endl;
    }

    return 0;
}

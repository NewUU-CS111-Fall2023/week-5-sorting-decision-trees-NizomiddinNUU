#include <iostream>
#include <vector>

int countElementsWithSmallerNeighbors(const std::vector<int>& arr) {
    int count = 0;

    if (arr.size() >= 3) {
        for (size_t i = 1; i < arr.size() - 1; ++i) {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    std::vector<int> arr = {1, 3, 2, 4, 1, 5, 2};
    
    int result = countElementsWithSmallerNeighbors(arr);

    std::cout << "Number of elements with smaller neighbors: " << result << std::endl;

    return 0;
}

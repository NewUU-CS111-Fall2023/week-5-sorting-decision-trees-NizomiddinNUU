#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int> &denominations) {
    int n = denominations.size();

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (denominations[j] < denominations[minIndex]) {
                minIndex = j;
            }
        }

        swap(denominations[i], denominations[minIndex]);
    }
}

int main() {
    vector<int> denominations;

    denominations.push_back(99);
    denominations.push_back(19);
    denominations.push_back(11);

    selectionSort(denominations);

    cout << "Sorted list of denominations:" << endl;
    for (const int &denomination : denominations) {
        cout << denomination << " ";
    }

    return 0;
}

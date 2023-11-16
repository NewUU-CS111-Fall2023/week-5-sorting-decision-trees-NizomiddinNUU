#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<string> &books) {
    int n = books.size();
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (books[j] > books[j + 1]) {
                swap(books[j], books[j + 1]);
            }
        }
    }
}

int main() {
    vector<string> bookTitles;

    bookTitles.push_back("Catcher in the Rye");
    bookTitles.push_back("Pride and Prejudice");
    bookTitles.push_back("To Kill a Mockingbird");
    bookTitles.push_back("The Great Gatsby");
    bookTitles.push_back("Moby Dick");

    bubbleSort(bookTitles);

    cout << "Sorted list of book titles:" << endl;
    for (const string &title : bookTitles) {
        cout << title << endl;
    }

    return 0;
}

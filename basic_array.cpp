#include <iostream>
using namespace std;

int main() {
    int SIZE = 5;
    int score[SIZE];

    cout << "Enter " << SIZE << " numbers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Number " << (i + 1) << ": ";
        cin >> score[i];
    }

    cout << "\n---SCORES---" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Number " << (i + 1) << ": " << score[i] << endl;
    }
}
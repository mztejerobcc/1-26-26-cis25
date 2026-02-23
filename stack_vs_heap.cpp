#include <iostream>
using namespace std;

int main() {
    int intOnTheStack = 10;
    int *intOnTheHeap = new int;
    *intOnTheHeap = 11;

    int howBig;

    int arrayOnTheStack[howBig]; // aray on the stack needs the size to be declared
    int *arrayOnTheHeap = new int[howBig];

    cout << "How big is your array: ";
    cin >> howBig;

    for (int i = 0; i < howBig; i++) {
        arrayOnTheHeap[i] = i;
        arrayOnTheStack[i] = i;

    }

    for (int i = 0; i < howBig; i++) {
        cout << arrayOnTheHeap[i] << endl;
        cout << arrayOnTheStack[i] << endl;

    }

    // cout << "intOnTheStack: " << intOnTheStack << endl;
    // cout << "intOnTheHeap: " << *intOnTheHeap << endl;

    return 0;
}
#include <iostream>
#include "testlib.h"

using namespace std;

int main() {
    registerGen(argc, argv, 1); // Initialize the random number generator

    int n = rnd.next(1, 100000); // Randomly generate 'n' between 1 and 10

    cout << n << endl;

    for (int i = 0; i < n; i++) {
        int ai = rnd.next(-1000000000, 100000000000); // Randomly generate 'ai' between -100 and 100
        cout << ai;
        if (i != n - 1) {
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}

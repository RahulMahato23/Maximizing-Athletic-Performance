#include <iostream>
#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1); // Initialize the random number generator

    int n = rnd.next(1, 100000); // Randomly generate 'n' between 1 and 10

    cout << n << endl;

    for (int i = 0; i < n; i++) {
        long long ai = rnd.next(-1000000000LL, 100000000000LL); // Randomly generate 'ai' between -100 and 100
        cout << ai;
        if (i != n - 1) {
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}

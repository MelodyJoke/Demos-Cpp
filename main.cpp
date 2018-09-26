#include <iostream>
#include "algorithms.h"

using namespace std;

int main() {
    // test in first installation
    cout << "Hello, Venus!" << endl;

    // 欧几里得最大公约数算法
    int left, right;
    cout << "type in two positive integers plz:\n";
    cin >> left;
    cin >> right;
    cout << "the greatest common divisor of " << left << " and " << right << " is " << euclidAlg(left, right) << ".\n";

    return 0;
}

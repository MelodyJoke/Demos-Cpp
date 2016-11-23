#include <iostream>
#include "algorithms.h"

using namespace std;

int main() {
    // test in first installation
    cout << "Hello, Venus!" << endl;

    // 阿基米德最大公约数算法
    int left, right;
    cout << "type in two positive integers plz:\n";
    cin >> left >> right;
    cout << "the greatest common divisor of " << left << " and " << right << " is " << archimedesAlg(left, right) << ".\n";

    return 0;
}

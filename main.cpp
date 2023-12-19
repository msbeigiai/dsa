#include <iostream>
#include "BinarySearch.h"


using namespace std;

int main() {

    BinarySearch bs;

    std::vector<int> A = { 3, 17, 75, 80, 202 };
    int searchValue = 80;

    int index = bs.binarySearch(A, searchValue);

    cout << index << endl;

    return 0;
}
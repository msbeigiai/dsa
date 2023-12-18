#include <iostream>
#include "LinearSearch.h"

using namespace std;

int main() {

    LinearSearch ls;

    std::vector<int> A = { 3, 17, 75, 80, 202 };
    int searchValue = 75;

    int index = ls.linearSearch(A, searchValue);

    cout << index << endl;

    return 0;
}
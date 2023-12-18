#include "LinearSearch.h"

LinearSearch::LinearSearch()
{
}

int LinearSearch::linearSearch(std::vector<int> orderedArray, int searchValue)
{
	for (int i = 0; i < orderedArray.size(); i++) {
		if (orderedArray[i] == searchValue)
			return i;
		else if (orderedArray[i] > searchValue) {
			break;
		}
	}
	return NULL;
}

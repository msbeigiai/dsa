#include "BinarySearch.h"
#include <cmath>

BinarySearch::BinarySearch()
{
}

int BinarySearch::binarySearch(std::vector<int> orderedArray, int searchValue)
{
	int lowerBound = 0;
	unsigned int upperBound = orderedArray.size() - 1;

	while (lowerBound <= upperBound) {
		int midPoint = ceil((float)(upperBound + lowerBound) / 2);
		int valueAtMidpoint = orderedArray[midPoint];
		if (valueAtMidpoint == searchValue) return midPoint;
		else if (searchValue < valueAtMidpoint) {
			upperBound = midPoint - 1;
		}
		else if (searchValue > valueAtMidpoint) {
			lowerBound = midPoint + 1;
		}
	}
	return NULL;
}

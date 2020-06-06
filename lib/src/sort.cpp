#include <iostream>
#include "include/lib.h"

void sort(int dst[], size_t size)
{
	size--; // amount of comparisons in 1th iteration
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size - i; j++) {
			if (dst[j+1] < dst[j]) {
				int buf = dst[j];
				dst[j] = dst[j+1];
				dst[j+1] = buf;
			}		
		}
	}

}

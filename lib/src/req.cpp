#include <iostream>
#include "include/lib.h"

//123
void req(long i)
{
	static int minus_sign;
	static int iter;

	if (i == 0 && iter == 0) { //pass 0 
		std::cout << i << std::endl;
		return;
	}

	if (i == 0) {
		if (minus_sign)
			std::cout << "- ";

		return;
	}

	if (i < 0) {
		minus_sign = 1;
		i *= -1;
	}


	std::cout << i%10 << " ";
	iter++;

	req(i/10);

	iter--;

	if (iter == 0)
		std::cout << std::endl;
}

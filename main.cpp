#include "include/lib.h"
#include <iostream>


int main()
{
	int arr[] = {23,4,3,25,1,-1};
	int i = 25;	
	std::cout << "test req(" << i << ") " << std::endl;
	req(i);
	i = -2345;
	std::cout << "test req(" << i << ") " << std::endl;
	req(i);
	i = 3;
	std::cout << "test req(" << i << ") " << std::endl;
	req(i);
	const int j = sizeof(arr)/sizeof(arr[0]);
	for (int k = 0; k < j; k++)
		std::cout << arr[k] << " ";
	std::cout << std::endl;
	sort(arr, j);
	for (int k = 0; k < j; k++)
		std::cout << arr[k] << " ";
	std::cout << std::endl;
	return 0;
}

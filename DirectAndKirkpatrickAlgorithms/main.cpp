#include "loadmesh.h"
#include <time.h>
#include <iostream>

int cells::sCount = 0;
int node::nCount = 0;

int main()
{
	loadmesh test("../tests/set3.txt");

	clock_t start = clock();
	test.points_location();
	clock_t end = clock();

	std::cout << (double)(end - start) / CLOCKS_PER_SEC << std::endl;

	start = clock();
	test.kirkpatrick_points_location(); 
	end = clock();

	std::cout << (double)(end - start) / CLOCKS_PER_SEC;

	return 0;
}

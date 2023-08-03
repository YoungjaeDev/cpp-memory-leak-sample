#include <iostream>
#include <cstdlib>
#include <vector>

void foo()
{
	std::vector<int> x(10);
	for (int i=0; i<10; i++) {
		x[i] = i;
	}
	for (int i=0; i<10; i++) {
		std::cout << x[i] << " ";
	}
}

int main()
{
	foo();
	return 0;
}

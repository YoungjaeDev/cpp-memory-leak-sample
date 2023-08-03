#include <iostream>
#include <cstdlib>

void foo()
{
	int *x = new int[10];
	for (int i=0; i<10; i++) {
		x[i] = i;
	}
	for (int i=0; i<10; i++) {
		std::cout << x[i] << " ";
	}
	delete[] x;
}

int main()
{
	foo();
	return 0;
}

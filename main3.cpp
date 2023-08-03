#include <iostream>
#include <cstdlib>
#include <memory>

void foo()
{
	// std::unique_ptr<float[]> x(new float[10]);
	std::unique_ptr<float[]> x = std::make_unique<float[]>(10);
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

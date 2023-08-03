#include <iostream>
#include <cstdlib>

void foo()
{
	int *x = (int*)malloc(10*sizeof(int));
}

int main()
{
	foo();
	return 0;
}

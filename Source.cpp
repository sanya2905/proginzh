#include "Header.h"
int main()
{
	int x = 200000000;
	unsigned int y = x << 16;
	unsigned int z = y >> 24;
	printf("%d", z);
	return 0;
}
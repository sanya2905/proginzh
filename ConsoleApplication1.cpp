
#include "Header.h"
int main()
{
	const char initial_str[12] = "000xy00x000";

	int result = fmg(initial_str, 14, 'x', 'y');
	std::cout << result;
}



#include "Header.h";
int Words(char* str)
{
	int count = 0;
	size_t sizestr = strlen(str);
	char* new_str = new char[sizestr + 2];
	memcpy(new_str, str, sizestr);
	new_str[sizestr] = '\0';
	str = new_str;
	cout << str;
	char* begin_str(str), * n_str(str + 1);
	while (*begin_str)
	{
		if (isalpha(*begin_str) && (isspace(*n_str) || ispunct(*n_str)))++count;
		++n_str;
		++begin_str;
	}
	delete[] new_str;
	return count;
}
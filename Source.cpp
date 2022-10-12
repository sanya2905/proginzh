#include "Header.h";
int fmg(const char* source, int source_length, char divider1, char divider2)
{
	int maxlen = 0;
	int curlen = 0;
	int dividerfound = 0;
	for (int i = 0; i < source_length; i++)
	{
		if (dividerfound) {
			if (source[i] == '0') 
			{
				curlen++;
			}
		}
		if (source[i] == divider1 || source[i] == divider2) {
			dividerfound = 1;
			if (maxlen < curlen) {
				maxlen = curlen;
				curlen = 0;
				curlen++;
			}
		}
		return maxlen;
	}
}
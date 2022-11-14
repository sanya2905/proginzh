
#include "Header.h"
int main()
{
	char a[] = "privet vsem ya sasha";
	int i,k;
	int count_probel = 0;
	int length = strlen(a);
	for (i = 0; i < length; i++)
	{
		printf("%c", a[i]);
	}                 
	printf("\n");
	for (i = length; i >=0; i--) 
	{
		printf("%c", a[i]);
	}
	printf("\n");
	int k = 0;
	int count_probel;
	for (i = 0; i < length; i++)
	{
		if (a[i] == ' ') {
			count_probel++;
		}
	}
	printf("%d \n", count_probel);
	for (i = 0; i < length; i++)
	{
		while (a[i] != ' ') {
			printf("%c", a[i]);
			i++;
			k = i;
		}
		printf("\n");
		for (k; k < length; k++)
		{
			printf("%c", a[k+1]);
		}
		break;
	}
	return 0;
}
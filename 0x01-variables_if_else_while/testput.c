#include <stdio.h>

int main(void)
{
	int x = 1;

	if (x != 0)
	{
		int n = x/10;
		
		putchar((x%10) + '0');
	}
	return (0);
}

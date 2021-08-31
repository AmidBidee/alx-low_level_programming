#include "main.h"
/**
 * jack_bauer - print
 */
void jack_bauer(void)
{
	int h1 = 0, h2 = 0, m1 = 0, m2 = 0; /* hour 0 hour 0 min 0 minute 0 */
	int min_count = 0, hr_count = 0;

	while (hr_count <= 24 && min_count <= 60)
	{
		if (m2 != 9)
			++m2;
		else
		{
			m1++;
			m2 = 0;
		}

		if (min_count == 60)
		{
			if (hr_count != 23)
			{
				if (h2 != 9)
					h2++;
				else
				{
					h2 = 0;
					h1++;
				}
				hr_count++;
			}
			else
				break;
			min_count = 0;
			m1 = 0;
			m2 = 0;
		}
		_putchar(h1 + '0');
		_putchar(h2 + '0');
		_putchar(':');
		_putchar(m1 + '0');
		_putchar(m2 + '0');
		_putchar('\n');
		min_count++;
	}
}

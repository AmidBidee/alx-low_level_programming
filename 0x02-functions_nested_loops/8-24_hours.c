#include "main.h"
/**
 * jack_bauer - print
 */
void jack_bauer(void)
{
	char time_arr[] = {'0', '0', '0', '0'}; /* hour 0 hour 0 min 0 minute 0 */
	int min_count = 0, hr_count = 0;

	while (hr_count != 24 && min_count != 61)
	{
		if (time_arr[3] != '9')
			++time_arr[3];
		else
		{
			time_arr[2]++;
			time_arr[3] = '0';
		}
		if (min_count == 60)
		{
			time_arr[2] = '0';
			time_arr[3] = '0';
			if (hr_count != 23)
			{
				if (time_arr[1] != '9')
					time_arr[1]++;
				else
				{
					time_arr[1] = '0';
					time_arr[0]++;
				}
				hr_count++;
			}
			else
				break;
			min_count = 0;
		}
		min_count++;
		_putchar(time_arr[0]);
		_putchar(time_arr[1]);
		_putchar(':');
		_putchar(time_arr[2]);
		_putchar(time_arr[3]);
		_putchar('\n');
	}
}

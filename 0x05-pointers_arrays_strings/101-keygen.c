#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - program that generates random valid passwords for the program
 * 101-crackme.
 * Return: (void)
 */
int main(void)
{
	char passwrd[84];
	int ind_x = 0, s_m = 0, diff_fst_half, diff_snd_half;

	srand(time(0));

	for (s_m = 0; s_m < 2772; s_m = s_m + passwrd[ind_x++])
	{
		passwrd[ind_x] = 33 + rand() % 94;
	}
	passwrd[ind_x] = '\0';

	if (s_m != 2772)
	{
		diff_fst_half = (s_m - 2772) / 2;
		diff_snd_half = (s_m - 2772) /2;

		if (((s_m -2772) % 2) != 0)
			diff_fst_half++;
		
		ind_x = 0;
		while (passwrd[ind_x])
		{
			if (passwrd[ind_x] >= (33 + diff_fst_half))
			{
				passwrd[ind_x] = passwrd[ind_x] - diff_fst_half;
				break;
			}
			ind_x++;
		}
		while (passwrd[ind_x])
		{
			if (passwrd[ind_x] >= (33 + diff_snd_half))
			{
				passwrd[ind_x] = passwrd[ind_x] - diff_snd_half;
				break;
			}
			ind_x++;
		}
	}
	printf("%s\n", passwrd);
	return (0);
}

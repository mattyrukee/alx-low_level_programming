Task #.txt

Who has access



System properties

Type

Text

Size

532 bytes

Storage used

532 bytes

Location

0x01-variables_if_else_while

Owner

Antony Bahati

Modified

11:03 by Antony Bahati

Opened

15:47 by me

Created

11:04

No description

Viewers can download

#include <stdlib.h>

#include <time.h>

#include <stdio.h>



/**
 *
 * * main - print if the number is postive, zero, or negative
 *
 * *
 *
 * * Description: using the main function
 *
 * * this program prints "Programming is positive, zero, or negative
 *
 * * Return: 0
 *
 * */

int main(void)

{

	int n;



	srand(time(0));

	n = rand() - RAND_MAX / 2;

	  /* your code goes there */

	if (n > 0)

	{

			printf("%i is positive\n", n);

	}

	else if (n == 0)

	{

			printf("%i is zero\n", n);

	}

	else if (n < 0)

	{

			printf("%i is negative\n", n);

	}

	return (0);

}

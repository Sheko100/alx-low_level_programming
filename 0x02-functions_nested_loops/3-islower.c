
/**
 * _islower - checks if the letter is lowercase or not
 * @c: the character to check
 *
 * Return: 1 if the letter is lowercase
 * 0 if the letter is not
 */

int _islower(int c)
{
	if (c < 123 && c > 96)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

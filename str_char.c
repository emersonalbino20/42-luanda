#include <unistd.h>

int main(void)
{
	char teste[] = {'a', 'n', 'g', 'o', 'l', 'a'};
	int i = 0;
	while(i < 6)
	{
		write(1, &teste[i], 1);
		i++;
	}
}

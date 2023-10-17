#include "main.h"

int main(void)
{
	char *prompt = "#cisfun$ ";

	while (1)
	{
		if (prompt != '\0')
			print_str(prompt);
	}
	return (0);
}

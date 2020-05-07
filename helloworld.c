#include "stdio.h"

int main(void)
{
	char *data;
	const char text[] = "Hello World!";
	data = (char *)text;
	printf("%s", data);

	return 0;
}

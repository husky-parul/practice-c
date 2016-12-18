#include <stdio.h>
int main()
{
	printf("Hello world");
	char input=getchar();
	printf("/n");
	putchar(input);
	printf("%s",&input);
	return 0;
}

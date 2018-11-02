#include <stdio.h>

int main()
{
	int n=10*1024*1024;
	char c;
	for(int i=0;i<n;i++)
	{
		c = getchar();
		putchar(c);
	}
	return 0;
}

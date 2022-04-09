#include <stdio.h>
int main()
{
	char str[]="3+4";
	int a=str[0]-'0';
	int b=str[2]-'0';
	int total = a + b;
	printf("total=%d\n",total);
	return 0;
}
#include<stdio.h>
int main()
{
	char str4[] = "2+2*3+2/2-1";
	int j;
	float fruit;
	fruit = float(str4[0] - '0');
	for (j = 1; str4[j] != '\0'; j++)
	{
		if (str4[j] == '+')
		{
			if (str4[j + 2] == '*' || str4[j + 2] == '/')
			{
				switch (str4[j + 2])
				{
				case '*':fruit = fruit + float(str4[j + 1] - '0')*float(str4[j + 3] - '0'); break;
				case '/':fruit = fruit + float(str4[j + 1] - '0') / float(str4[j + 3] - '0'); break;
				}
			}
			else
			{
				fruit = fruit + (str4[j + 1] - '0');
			}
		}

		else if (str4[j] == '-')
		{
			if (str4[j + 2] == '*' || str4[j + 2] == '/')
			{
				switch (str4[j + 2])
				{
				case '*':fruit = fruit - float(str4[j + 1] - '0')*float(str4[j + 3] - '0'); break;
				case '/':fruit = fruit - float(str4[j + 1] - '0')/float(str4[j + 3] - '0'); break;
				}
			}
			else
			{
				fruit = fruit - (str4[j + 1] - '0');
			}
		}
	}
	printf("V3=%.2f\n",fruit);
	return 0;
}

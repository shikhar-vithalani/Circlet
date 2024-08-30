#include<stdio.h>
int main()
{
	int c=11;
	for(int a=11; a<=15; a++)
	{
		for( int b=11; b<=a; b++)
		{
			printf("%d ",c++);
		}
		printf("\n");
	}
}
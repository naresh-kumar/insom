#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int testCases = 11;
	printf("%d\n", testCases);
	while(testCases > 1)
	{
		testCases--;
		int n = 100000;
		printf("%d\n", n);
		for(int i=0; i<n; ++i)
		{
			printf("%d ", rand());
		}
		printf("\n");
	}
		int n = 100000;
		printf("%d\n", n);
		for(int i=0; i<n; ++i)
		{
			printf("1000000000 ");
		}
		printf("\n");
}

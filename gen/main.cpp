#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	printf("1\n100000\n");
	for(int i=0; i<100000; ++i)
	{
		printf("%d ", rand());
	}
	printf("\n");
}

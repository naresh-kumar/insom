#include <stdio.h>
#include <stdlib.h>

int MOD = 1000000007;
int main(int argc, char **argv)
{
//	int testCases = 11;
//	printf("%d\n", testCases);
//	while(testCases > 1)
		//testCases--;
		int n = 100000;
		printf("%d\n", n);
		for(int i=0; i<n; ++i)
		{
			printf("%d ", rand() % MOD);
		}
		printf("\n");
		return 0;
}

#include <vector>
#include <string>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
#include <sstream>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <ctype.h>
#include <bitset>

using namespace std;
char s[1005];
vector<string> stringArray;
vector<int> intArray;
vector<int> flag;

int main()
{
	while (true)
	{
		int c = scanf("%s", s);
		if (c == -1) break;
		int f = (int)(s[0] - '0');
		if(f >= 0 && f <= 9)
		{
			intArray.push_back(atoi(s));
			flag.push_back(0);
		}
		else
		{
			stringArray.push_back(s);
			flag.push_back(1);
		}
	}
	sort(stringArray.begin(), stringArray.end());
	sort(intArray.begin(), intArray.end());
	
	int total = flag.size();
	int intIndex = 0;
	int stringIndex = 0;
	for(int i = 0; i < total; ++i)
	{
		if(flag[i] == 0)
			printf("%d", intArray[intIndex++]);
		else
			printf("%s", stringArray[stringIndex++].c_str());
			
		if(i < total - 1) printf(" ");
	}
}

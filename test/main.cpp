/*//author Naresh
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

#define REP(i, n) for(int i=0; i<(n); i++)
#define FOR(i, a, b) for(int i=(a); i<(b); i++)
#define IFOR(i, a, b) for(int i=(a); i>=(b); i--)
#define FORD(i, a, b, c) for(int i=(a); i<(b); i+=(c))

#define SI(x) ((int)x.size())
#define PB(x) push_back(x)
#define MP(a,b) make_pair(a, b)
#define SORT(a) sort(a.begin(),a.end())
#define ITER(it,a) for(typeof(a.begin()) it=a.begin();it!=a.end();it++)
#define ALL(a) a.begin(),a.end()
#define INF 1000000000
#define V vector
#define S string
#define FST first
#define SEC second
#define SS ({int x;scanf("%d", &x);x;})
typedef V<int> VI;
typedef V<S> VS;
typedef long long LL;
typedef pair<int, int> PII;

int A4[100000];
int A7[100000];
LL C4[100000];
LL C7[100000];

using namespace std;

int count(int number, int digit)
{
	int count = 0;
	while(number > 0)
	{
		if(number % 10 == digit) count++;
		number /= 10;
	}
	return count;
}

int solve1(int c4, int c7, int l, int r)
{
	LL left = 1;
	int right = r - l + 1;
	int sol = 1;
	FOR(i, 0, c7)
	{
		left *= c4;
		if(left > right) 
		{
			sol = 0; break;
		}
	}
	//printf("%d %d %d %d %d\n", c4, c7, l, r, sol);
	return sol;
}
	
int main(int argc, char **argv)
{
	int testCases = SS;
	while(testCases--)
	{
		int n=SS;
		LL cum4 = 0;
		LL cum7 = 0;
		LL ans = 0;
		FOR(i, 0, n) 
		{
			int temp = SS;
			A4[i]=count(temp, 4);
			A7[i]=count(temp, 7);
			
			cum4 += A4[i];
			//cout << cum4 << endl;
			C4[i] = cum4;
			cum7 += A7[i];
			C7[i] = cum7;
			
			FOR(j, 0, i+1)
			{
				int c4 = j > 0 ? cum4-C4[j-1] : cum4;
				if(c4 == 2) continue;
				int c7 = j > 0 ? cum7-C7[j-1] : cum7;
				if(c7 == 2) continue;
				ans += solve1(c4, c7, j+1, i+1);
			}
		}
		printf("%lld\n", ans);
	}
}*/

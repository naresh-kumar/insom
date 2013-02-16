//author Naresh
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
#define SS ({int x;scanf("%d", &x);x;})
#define SSL ({long long x;scanf("%lld", &x);x;})

#define V vector
#define S string
#define FST first
#define SEC second
typedef V<int> VI;
typedef V<S> VS;
typedef long long LL;
typedef pair<int, int> PII;
typedef pair<S, int> PSI;
typedef pair<S, S> PSS;
typedef map<S, int> MSI;
typedef map<S, S> MSS;

#define SIZE 1024*64
char buffer[SIZE];
int buffer_size;
int pointer = 0;
int max_digits = 15;
int nextInt()
{
	int num = 0;
	char c;
	int r = buffer_size - pointer;
	if(r < max_digits)
	{
		memcpy(buffer, buffer + pointer, r);
		buffer_size = r + fread(buffer + r, 1, SIZE-r, stdin);
		pointer = 0;
	}
	while(true)
	{
		c = buffer[pointer];
		if (c == '\n' || c == ' ')
		{
			++pointer;
			return num;
		} 
		else 
		{
			num = num*10 + c - '0';
		}
		++pointer;
	}
}

int main()
{
	//freopen("in", "r", stdin);
	
	buffer_size = fread(buffer, 1, SIZE, stdin);
	
	int n = nextInt();
	int k = nextInt();
	int count = 0;
	int a;
	REP(i,n)
	{
		a = nextInt();
		if(a%k == 0) ++count;
	}
	printf("%d\n", count);
	return 0;
}

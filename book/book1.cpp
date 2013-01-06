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

char name[16];
int size;

struct book {
	string name;
	int rem;
	int up;
};

int main()
{
	//freopen("/home/naresh/codechef/book/Debug/in", "r+", stdin);
	stack<book> pile;
	size = 0;
	int n = SS;
	for(int i = 0; i < n; ++i)
	{
		int next = SS;
		
		if(next == -1)
		{
			struct book top = pile.top();
			printf("%d %s\n", top.up, top.name.c_str());
			pile.pop();
		}
		else
		{
			struct book b;
			scanf("%s", name);
			b.name = name;
			b.rem = next;
			b.up = 0;
			
			if(pile.size() > 0)
			{
				struct book* top = &pile.top();
				if((*top).rem < b.rem) 
				{
					(*top).up = 1 + (*top).up;
				}
				else 
				{
					pile.push(b);
				}
			}
			else 
			{
				pile.push(b);
			}
		}
	}
	return 0;
}
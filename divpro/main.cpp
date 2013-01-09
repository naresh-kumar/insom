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

template<typename T>
void printMap(T c)
{
	ITER(it, c)
	{
		cout << it->first << " " << it->second << ", ";
	}
	cout << endl;
}

template<typename T>
void printList(T c)
{
	ITER(it, c)
	{
		cout << *it << ", ";
	}
	cout << endl;
}
int f(int x, int y)
{
	if(x < 0 || y < 0) return 0;
	if(x == 1 && y == 1) return 9;
	if(x == 1 && y == 2) return 23;
	if(x == 0 && y > 0) return 1;
	if(x == 1 && y == 3) return 1 + 9*f(x-1,y-1) + 23*f(x-1,y-2) + f(x, y-1);
	return 9*f(x-1,y-1) + 6*f(x-1,y-2) + f(x-1, y-3) + f(x, y-1);
}
int main()
{
	
	int t = SS;
	while(t--)
	{
		int x = SS;
		int y = SS;
		cout << f(x,y) << endl;
	}
	return 0;
}



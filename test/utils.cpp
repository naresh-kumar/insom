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
#define V vector
#define S string
#define FST first
#define SEC second
#define SS ({int x;scanf("%d", &x);x;})
typedef V<int> VI;
typedef V<S> VS;
typedef long long LL;
typedef pair<int, int> PII;
int sol[5000][5000];
using namespace std;
int mod = 1000000007;
int combination(int n, int k)
{
	if(k == 0 ) return 1;
	if(n <= k) return 1;
	if(k > n/2) k = n-k;
	return sol[n][k];
}

void compute()
{

	for(int i = 1; i < 5000; ++i) {
		sol[i][0] = 1;
		for(int j = 1; j < i && j < 2500; ++j){
				sol[i][j] = (sol[i-1][j-1] + sol[i-1][j])%mod;    
		}
		sol[i][i]= 1;
	}
}

int fact(int n)
{
	int answer = 1;
	while(n != 1)
	{
		answer *= n--;
	}
	return answer;
}

int pow(int a, int b)
{
	int answer = 1;
	for(int i = 0; i < b; ++i)
	{
		answer *= a;
	}
	return answer;
}

int flodWarshall()
{
	int m = 0;
	int shift[2][2];
	FOR(k, 0, m)
	FOR(i, 0, m)
	FOR(j, 0, m)
	shift[i][j] = min(shift[i][j], shift[i][k]+shift[k][j]);
	return 0;
}
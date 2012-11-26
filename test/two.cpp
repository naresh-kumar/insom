//author Naresh
// LELUCKYN
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
#include <cassert>

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

int A4[100005];
int A7[100005];
int C4[100005];
int C7[100005];
int rep[100005];

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

LL solve(int c4, int c7, int l, int r)
{
	LL left = 1;
	int right = r - l + 1;

	FOR(i, 0, c7)
	{
		left *= c4;
		if(left > 100000000001LL) 
		{
			//if(i < c7-1) left *= c4;
			break;
		}
	}
	return left - right;
}
	
int main(int argc, char **argv)
{
	/*REP(i, 19)
	{
		printf("%d %d %lld\n", i, 18-i, (LL)pow((double)i, (double)(18-i)));
	}
	return 0;*/
	int testCases = SS;
	while(testCases--)
	{
		int n=SS;
		int cum4 = 0;
		int cum7 = 0;
		LL ans = 0;
		int r = 0;
		REP(i, n) 
		{
			int temp = SS;
			A4[i]=count(temp, 4);
			A7[i]=count(temp, 7);
			if(A4[i] == 0 && A7[i] == 0)
			{
				++r;
				
			}
			else
			{
				r = 0;
			}
			
			cout << cum4 << " " << cum7 << " " << r << endl;
			rep[i] = r;
			cum4 += A4[i];
			//cout << cum4 << endl;
			C4[i] = cum4;
			cum7 += A7[i];
			C7[i] = cum7;
			LL diff = 0;
			for(LL j= i; j >=0; --j)
			{
				if(j < 0 || j > i) cout << "j " << j << endl;
				LL c4 = j > 0 ? C4[i]-C4[j-1] : C4[i];
				if(c4 == 2) continue;
				LL c7 = j > 0 ? C7[i]-C7[j-1] : C7[i];
				if(c7 == 2) continue;
				
				
				diff = solve(c4, c7, j+1, i+1);
				if(diff <= 0)
				{
					++ans;
					if(c4 ==0 && c7 == 0)
					{
						if(diff < 7)
						if(diff < -1024)
						{++ans;--j;}
					}
				}
				else if(c4 != 0)
				{
					j = j - diff + 1; 
				}
			}
		}
		printf("%lld\n", ans);
	}
}

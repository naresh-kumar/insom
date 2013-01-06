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

int arr[100000];
int MOD = 1000000007;
int minr[100000];
int maxr[100000];
int prod[100000];
int min1[100000];
int max1[100000];
int prod1[100000];
int min2[100000];
int max2[100000];
int prod2[100000];
int n;

int main()
{
	n = SS;
	REP(i, n) arr[i] = SS;

	int min = 1000000008;
	int max = -1;
	REP(i, n) 
	{
		if(min > arr[i]) min = arr[i];
		if(max < arr[i]) max = arr[i];
		minr[i] = min;
		maxr[i] = max;
	}
	LL c_prod = 1;
	IFOR(i, n-1, 0)
	{
		c_prod *= (maxr[i] - minr[i]);
		if(c_prod > MOD) c_prod %= MOD;
		prod[i] = c_prod;
	}
	
	min = 1000000008;
	max = -1;
	
	FOR(i, n/4, n) 
	{
		if(min > arr[i]) min = arr[i];
		if(max < arr[i]) max = arr[i];
		min1[i] = min;
		max1[i] = max;
	}
	c_prod = 1;
	IFOR(i, n-1, n/4)
	{
		c_prod *= (max1[i] - min1[i]);
		if(c_prod > MOD) c_prod %= MOD;
		prod1[i] = c_prod;
	}
	
	min = 1000000008;
	max = -1;
	
	FOR(i, n/2, n) 
	{
		if(min > arr[i]) min = arr[i];
		if(max < arr[i]) max = arr[i];
		min2[i] = min;
		max2[i] = max;
	}
	c_prod = 1;
	IFOR(i, n-1, n/2)
	{
		c_prod *= (max2[i] - min2[i]);
		if(c_prod > MOD) c_prod %= MOD;
		prod2[i] = c_prod;
	}
	
	int i, j;
	LL ans = 1;
	
	for (i = 0; i < n; i++)
	{
		min = arr[i];
		max = arr[i];
		bool minMatch = false;
		bool maxMatch = false;
		for (j = i + 1; j < n; j++)
		{
			if(arr[j] < min) min = arr[j];
			if(arr[j] > max) max = arr[j];
			if(i > n/2)
			{
				if(min == min2[j]) minMatch = true;
				if(max == max2[j]) maxMatch = true;
			}
			else if(i > n/4)
			{
				if(min == min1[j]) minMatch = true;
				if(max == max1[j]) maxMatch = true;
			}
			else
			{
				if(min == minr[j]) minMatch = true;
				if(max == maxr[j]) maxMatch = true;
			}
			
			if(minMatch && maxMatch)
			{
				if(i > n/2)
					ans *= prod2[j];
				else if(i > n/4)
					ans *= prod1[j];
				else
					ans *= prod[j];
				if(ans > MOD) ans %= MOD;
				cout << "break " << i << " " << j << endl;
				break;
			}
			else
			{
				ans *= (max - min);
				if(ans > MOD) ans %= MOD;
			}
		}
//		if(i%1000 == 0)
//		cout << ans << endl;
	}
	cout << ans << endl;
	
	return 0;
}

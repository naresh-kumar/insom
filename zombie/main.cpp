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

int main()
{
	int t = SS;
	while(t--)
	{
		int n = SS;
		int m = SS;
		int k = SS;
			
		vector<vector<int> > graph(n);
		
		for (int i = 0; i < m; ++i)
		{
			int a = SS;
			int b = SS;
			graph[a].push_back(b);
			graph[b].push_back(a);
		}
		
		vector<vector<double> > zombies(2);
		for (int i = 0; i < n; ++i)
		{
			int temp = SS;
			zombies[0].push_back(temp);
			zombies[1].push_back(0.0);
		}

		int iter = min(100, k);
		for (int i = 0; i < 100; ++i)
		{
			int from = i % 2;
			int to = 1 - from;
			for (int j = 0; j < n; ++j)
			{

				double res = 0.0;
				REP(o,graph[j].size())
				{
					res += zombies[from][o] / (double)graph[o].size();
				}
				zombies[to][j] = res;
			}
		}

		int answerRow = k % 2;
		vector<double> ans = zombies[answerRow];
		sort(ans.begin(), ans.end());

		int low = n - 1 - 4;
		for (int i = n - 1; i >= low; --i)
		{
			printf("%.0f", ans[i]);
			if (i != low) cout << " ";
		}
		cout<< endl;
	}
	return 0;
}












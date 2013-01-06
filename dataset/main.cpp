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

int main()
{
	//cout << "1" << endl;
	vector<int> dataset;
	vector<vector<int> > data;
	int datacenter[1000005];
	for(int i = 0; i < 1000005; ++i)
	{
		datacenter[i] = -1;
	}
	//cout << "3" << endl;
	string s;
	//cout << "-" << endl;
	getline(cin, s);
	int n = atoi(s.c_str());
	//out << n << " " << endl;
	cout << n << endl ;
	for(int i = 0; i < n; ++i)
	{
		getline(cin, s);
		stringstream ss(s);
		vector<int> v;
		while(ss)
		{
			int id;
			ss >> id;
			if(datacenter[id] == -1 && id != 0)
			{
				dataset.push_back(id);
				datacenter[id] = i + 1;
			}
			if(id != 0)
			{
			v.push_back(id);
			cout << id << " ";
			}
		}
		data.push_back(v);
		cout << " done " << i << endl;
	}
	//cout << n << " " << endl;
	cout << "uu";
	int temp[1000005];
	for(int i = 0; i < 1000005; ++i)
	{
		temp[i] = -1;
	}
	
	for(int i = 0; i < n; ++i)
	{
		cout << "uu";
		vector<int> v = data[i];
		cout << "uu";
		for(int j = 0; j < v.size(); ++j)
		{
			temp[v[j]] = 1;
		}
		cout << "uu";
		for(int j = 0; j < dataset.size(); ++j)
		{
			int value = dataset[j];
			if(temp[value] == -1)
			{
				printf("%s %s %s\n", value, datacenter[value], i + 1);
			}
		}
		cout << "uu";
		for(int j = 0; j < v.size(); ++j)
		{
			temp[v[j]] = -1;
		}
		cout << "uu";
	}
	//cout << n << " " << endl;
	return 0;
}

/*Knapsack Problem

Problem Statement:
Guri takes part in programming contests. His favourite topic is dynamic programming(DP). As he said, that he likes problems on DP, because "you spend a lot of time on thinking and a little time on coding".

In this problem you are to solve a version of the knapsack problem, one of the most famous examples of DP problem.

You are given N items, each has two parameters: a weight and a cost. Let's define M as the sum of the weights of all the items.

Your task is to determine the most expensive cost of a knapsack, which capacity equals to 1, 2, ..., M. A cost of a knapsack equals to the sum of the costs of all the elements of the knapsack. Also, when you have a knapsack with a capacity is equal to C, then you can fill it with items, whose sum of weights is not greater than C.

Input:
The first line of the input contains one integer N, denoting the number of the items.

The next N lines contain two integers W and C each, denoting the weight and the cost of the corresponding item.

Output:
For each capacity C (1 ≤ C ≤ M) of the knapsack, output a single integer - the most expensive cost for that capacity.

Constraints:
3 ≤ N ≤ 100000;

1 ≤ W ≤ 2, for each item;

1 ≤ C ≤ 10^9, for each item.

Time Limit:
1 sec

Example 1:
Input
5
1 1
2 2
2 3
2 4
2 5

Output
1
5
6
9
10
12
13
14
15

Sample I/O Explanation:
In the test case, M equals to 9. For C = 1, it's optimal to choose {1} items; For C = 2, it's optimal to choose {5} items; For C = 3, it's optimal to choose {1, 5} items; For C = 4, it's optimal to choose {4, 5} items; For C = 5, it's optimal to choose {1, 4, 5} items; For C = 6, it's optimal to choose {3, 4, 5} items; For C = 7, it's optimal to choose {1, 3, 4, 5} items; For C = 8, it's optimal to choose {2, 3, 4, 5} items; For C = 9, it's optimal to choose {1, 2, 3, 4, 5} items. */

#include <bits/stdc++.h> //type: ignore

#define FOR(i, a, b) for (int i = a; i < b; i++)
#define LOOP(i, a) FOR(i, 0, a)

#define SET(p) memset(p, -1, sizeof(p))
#define CLR(p) memset(p, 0, sizeof(p))
#define BIG(p) memset(p, 0x3f, sizeof(p))

#define ll unsigned long long
#define oo (1000000000 + 7)
#define DEBUG
#ifdef DEBUG
#define deb(args...)  \
	{                 \
		dbg, args;    \
		cerr << endl; \
	}
#else
#define deb(args...) // Just strip off all debug tokens
#endif
struct debugger
{
	template <typename T>
	debugger &operator,(const T &v)
	{
		std::cerr << v << " ";
		return *this;
	}
} dbg;

using namespace std;
long long ones[100005], two[100005];
int main()
{
	int n, w, c;
	long long M = 0;
	cin >> n;
	priority_queue<long long> O, T;
	priority_queue<long long, vector<long long>, greater<long long>> os, ts;
	for (int i = 1; i <= n; i++)
	{
		cin >> w >> c;
		if (w == 1)
		{
			M += 1;
			O.push(c);
		}
		else
		{
			T.push(c);
			M += 2;
		}
	}
	// deb("over", M);
	long long m = 1, cost = 0, Top, ac = 0;
	while (m <= M)
	{

		//		1 is a special case, cannot use weight of two

		long long tcost, ocost;
		tcost = ocost = cost;
		if (os.empty() == false and T.empty() == false)
		{
			tcost = tcost - os.top() + T.top();
		}
		if (O.empty() == false)
		{
			ocost = ocost + O.top();
		}
		if (ocost > cost and ocost >= tcost)
		{ /*adding one*/
			cost = ocost;
			os.push(O.top());
			O.pop();
			ac += 1;
		}
		else if (tcost > cost and tcost >= ocost)
		{ /*removing one and adding two*/
			cost = tcost;
			ts.push(T.top());
			T.pop();
			O.push(os.top());
			os.pop();
			ac += 1;
		}
		else if (T.empty() == false and ac + 2 <= m)
		{
			while (T.empty() == false and ac + 2 <= m)
			{
				cost += T.top();
				ts.push(T.top());
				T.pop();
				ac += 2;
			}
		}
		cout << cost << endl;
		m++;
	}
	return 0;
}

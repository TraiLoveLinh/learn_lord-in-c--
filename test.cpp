#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[10];
	memset(a, 0, sizeof(a));
	for (auto item : a)
	{
		printf("%d\n", a);
	}
	printf("\n");

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", a[i]);
	}
	printf("\n");
	return 0;
}
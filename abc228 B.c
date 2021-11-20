#include<stdio.h>
int main()
{
	int n, x;
	scanf("%d %d", &n, &x);
	int i;
	int a[100005];
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		a[i]--;
	}
	int c[100005];
	for (i = 0; i < n; i++)
		c[i] = 0;
	int ans = 0;
	for (i = x - 1; c[i] == 0; i = a[i])
	{
		ans++;
		c[i]++;
	}
	printf("%d\n", ans);
	return 0;
}

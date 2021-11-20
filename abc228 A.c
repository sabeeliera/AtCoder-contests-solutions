#include<stdio.h>
int main()
{
	int s, t, x;
	scanf("%d %d %d", &s, &t, &x);
	if (s <= x && x < t)
		printf("Yes\n");
	else if (t < s && (s <= x || x < t))
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}

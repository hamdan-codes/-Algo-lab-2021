// Author: Chaudhary Hamdan

#include <stdio.h>
#include <time.h>
#include <limits.h>
#include <stdlib.h>

#define sf(x)           scanf("%d", &x)
#define pf              printf
#define pfs(x)          printf("%d ", x)
#define pfn(x)          printf("%d\n", x)
#define pfc(x)          printf("%d, ", x)
#define F(i,x,y)        for(int i = x; i < y; i++)
#define FI(i,x,y,inc)   for(int i = x; i < y; i += inc)
#define RF(i,x,y)       for(int i = x; i >= y; i--)
#define pfarr(i,a,n)    for(int i = 0; i < n-1; i++) pfs(a[i]); pfn(a[n-1]);


void i_o_from_file() {

#ifndef ONLINE_JUDGE
	freopen("C:\\Users\\KIIT\\input", "r", stdin);
	freopen("C:\\Users\\KIIT\\output", "w", stdout);
#endif
}

int maxSum(int a[], int n)
{
	int prev = INT_MIN, curr = 0;

	for (int i = 0; i < n; i++)
	{
		curr = curr + a[i];

		if (prev < curr)
			prev = curr;

		if (curr < 0)
			curr = 0;
	}
	return prev;
}





int main() {

	i_o_from_file();

	/* ********************************************* */

	int n;
	sf(n);

	int arr[n];
	F(i, 0, n) {
		sf(arr[i]);
	}

	time_t start, end;
	double time;
	start = clock();
	pf("Max Subarray sum : %d\n", maxSum(arr, n));
	end = clock();

	time = (end - start) * 1.0 / CLOCKS_PER_SEC;

	pf("Time taken: %f seconds", time);





	return 0;
}

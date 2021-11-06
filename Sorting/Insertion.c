/* Insertion Sort 
- Inefficient on large daate items but quite efficient for small 10-20 items.
- O(n2) quadratic running time
- More efficient than bubble or selection
- Speeds up on already sorted array
- Requires more writes and hence incase write to memory is expensive use selection sort*/

#include <stdio.h>
void swap(int *a, int x, int y)
{
	int temp = a[x];
	a[x] = a[y];
	a[y] = temp;
}
void showArray(int *a, int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
}
void main()
{
	int n, i, j, *a;
	scanf("%d\n",&n);
	a = (int *)malloc(sizeof(int) * n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i = 1; i<n; i++)
	{
		j=i;
		while(j>0 && a[j-1]>a[j])
		{
			swap(a,j-1,j);
			j--;
		}
	}
	printf("\n Sorted Array is :");
	showArray(a, n);

}

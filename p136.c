#include <stdio.h>
void sort(int n, int* ptr)
{
	int i, j, t;
	for (i = 0; i < n; i++) {

		for (j = i + 1; j < n; j++) {

			if (*(ptr + j) < *(ptr + i)) {

				t = *(ptr + i);
				*(ptr + i) = *(ptr + j);
				*(ptr + j) = t;
			}
		}
	}

	for (i = 0; i < n; i++)
		printf("%d ", *(ptr + i));
}
int main()
{
	int n = 5;
	int arr[] = { 0, 23, 14, 12, 9 };
    //int n,i,arr[100];
    //printf("enter the no of elements in the array:");
    //scanf("%d",&n);
    //printf("input %d no of elements:",n);
    //for(i=0;i<n;i++)
    //{
     //  printf("element-%d:",i);
       //scanf("%d",arr[i]);
    //}
	sort(n, arr);

	return 0;
}

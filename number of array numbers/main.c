#include<stdio.h>

int main(void)
{
	int array[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int count = sizeof(array)/sizeof(int);

	printf("%d elements are present in the array",count);

	return 0;
}

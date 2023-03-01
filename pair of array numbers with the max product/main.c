#include<stdio.h>
int main(void)
{
	int array[]={-1,5,-2,100,200};
	int max=0;
	int x=0;
	int y=0;

	int length = sizeof(array)/sizeof(int);

	for(int i=0; i<length; i++){
		for(int j=0; j<length-1; j++){

			if((array[i]*array[j])>max){

				max = array[i]*array[j];
				 x=array[i];
				 y=array[j];
			}
		}
	}
	printf("The pair of array numbers with the highest product is %d and %d with a product of %d\n",x,y,max);

	return 0;
}

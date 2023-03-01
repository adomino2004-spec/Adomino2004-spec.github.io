#include<stdio.h>
int main(void)
{
	int array[]={1,6,10,200,0,5,800,100,90};
	int max=array[0];
	
	int length= sizeof(array)/sizeof(int);
	
	

	for(int i=0; i<length; i++){
		if(array[i] > max){
			max = array[i];
		}
	}
	printf("%d is the largest array number\n",max);
	return 0;
}

#include <stdio.h>
int main()
{
	int coefficient;
	int power;
	int newCoefficient;
 	int newPower;

	printf("enter coefficient: ");
	scanf("%d",&coefficient);

	printf("enter power: ");
	scanf("%d",&power);

	if(power==0){
		printf("The differential is 0\n");
		exit(0);
	}

	if(coefficient==0){
		printf("The answer is 0\n");
	}
	else{

	newCoefficient = (power)*(coefficient);
	newPower = (power)-1;

	printf("The differential of this function is: %dx^%d assuming x as the variable\n",newCoefficient,newPower);

	}

	return 0;



}

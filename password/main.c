#include<stdio.h>
int main()
{
	int password;
	printf("please enter password:");
	scanf("%d", &password);

	if(password==1234){
		printf("welcome Dylan\n");
	}
	else{
		printf("wrong password\n");
	}
	return 0;
}

#include <stdio.h>

int main()
{
	int count;
	scanf("%d",&count);
	
	int i=0;
	while (count>0){
		printf("Hello, world! %d\n",count);
		count--;
	}

	return 0;
}

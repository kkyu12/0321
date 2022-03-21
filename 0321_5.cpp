#include <stdio.h>

int main()
{
	int decimal;
	int binary[20]={0};
	int position=0;
	
	printf("2진수를 구하고 싶은 수를 입력하시오.");
	scanf("%d",&decimal);
	
	while (decimal!=0){
		binary[position]=decimal%2;
		decimal=decimal/2;
		position++;
	}
	for (int i=position-1;i>=0;i--)
		printf("%d",binary[i]);
	
	return 0;
}

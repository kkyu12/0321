#include <stdio.h>

int main()
{
	int decimal;
	int binary[20]={0};
	int position=0;
	
	printf("2������ ���ϰ� ���� ���� �Է��Ͻÿ�.");
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

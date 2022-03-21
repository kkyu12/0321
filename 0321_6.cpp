#include <stdio.h>

int main()
{
	int decimal=0;
	int binary[4]={1,0,1,1};
	int result=1;
	
	for (int i=3;i>=0;i--){
		if (binary[i] ==1){
			for (int j=i-1;j>=0;j--){
				result*=2;
			}
		decimal+=1*result;
		result=1;
	}
	}
	printf("%d\n",decimal);

	return 0;
}

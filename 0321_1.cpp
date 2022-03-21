#include <stdio.h>

int main()
{
	int numArr[10]={11,22,33,44,55,66,77,88,99,110};//처음 지정때만 모든 수를 지정할 수 있음 
	//numArr[0]=0; //처음 지정 후에 다른 수를 넣으려면 하나씩 넣어야한다 
	printf("%d\n",numArr[0]);
	printf("%d\n",numArr[5]);
	printf("%d\n",numArr[9]);

	return 0;
}

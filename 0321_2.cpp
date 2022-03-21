#include <stdio.h>

int main()
{
	int numArr[10]={11,22,33,44,55,66,77,88,99,110};
	int sum=0;
	//for (int i=0;i<sizeof(numArr)/sizeof(int);i++){
	//배열의 요소 개수만큼 반복 
	for (int i=0;i<10;i++){
		sum=sum+numArr[i];
		//sum += numArr[i];
	} 
	printf("총합 : %d\n",sum);
	return 0;
}

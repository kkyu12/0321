#include <stdio.h>

int main()
{
	int score[10][21]={0};
	int sum[21]={0};
	float ave[21]={0};
	int total[10]={0};
	float subjectAve[10]={0};
	
	int studentCount=0;
	int subjectCount=0;
	
	printf("�л� �� �Է�(�ִ� 21��) : ");
	scanf("%d",&studentCount);
	
	printf("���� �� �Է�(�ִ� 10����) : ");
	scanf("%d",&subjectCount);
	
	for (int i=0;i<studentCount;i++){
			printf("koposw%d �л��� ���� %d���� ���ʴ�� �Է��ϼ���.",i+1,subjectCount);
		for (int j=0;j<subjectCount;j++){
			scanf("%d",&score[j][i]);
		}
	}
	//�л���ȣ �� ���� ������ ��� 
	for (int i=0;i<studentCount;i++){
		for (int j=0;j<subjectCount;j++){
			sum[i]=sum[i]+score[j][i];
		}
		ave[i]=sum[i]/float(subjectCount);
		printf("koposw%d �л��� ���� ������ %d, ����� %.2f �Դϴ�.\n",i+1,sum[i],ave[i]);
	}
	
	for (int j=0;j<subjectCount;j++){
		for (int i=0;i<studentCount;i++){
		total[j]=total[j]+score[j][i];
		}
		subjectAve[j]=total[j]/float(studentCount);
		printf("����%d ������ %d ��, ��ü ��� : %.2f ��\n",j+1,total[j],subjectAve[j]);
	}
	return 0;
}

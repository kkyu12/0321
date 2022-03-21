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
	
	printf("학생 수 입력(최대 21명) : ");
	scanf("%d",&studentCount);
	
	printf("과목 수 입력(최대 10과목) : ");
	scanf("%d",&subjectCount);
	
	for (int i=0;i<studentCount;i++){
			printf("koposw%d 학생의 점수 %d개를 차례대로 입력하세요.",i+1,subjectCount);
		for (int j=0;j<subjectCount;j++){
			scanf("%d",&score[j][i]);
		}
	}
	//학생번호 별 과목 총점과 평균 
	for (int i=0;i<studentCount;i++){
		for (int j=0;j<subjectCount;j++){
			sum[i]=sum[i]+score[j][i];
		}
		ave[i]=sum[i]/float(subjectCount);
		printf("koposw%d 학생의 과목 총점은 %d, 평균은 %.2f 입니다.\n",i+1,sum[i],ave[i]);
	}
	
	for (int j=0;j<subjectCount;j++){
		for (int i=0;i<studentCount;i++){
		total[j]=total[j]+score[j][i];
		}
		subjectAve[j]=total[j]/float(studentCount);
		printf("과목%d 총점은 %d 점, 전체 평균 : %.2f 점\n",j+1,total[j],subjectAve[j]);
	}
	return 0;
}

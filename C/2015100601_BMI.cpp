#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	float heigh, weight;
	printf("BMI�p���\n�п�J�A�������]�����^�G");
	scanf_s("%f", &heigh);
	printf("�п�J�A���魫�]����^:");
	scanf_s("%f", &weight);

	float h2 = pow((heigh / 100), 2);
	float bmi = weight / h2;
	
	printf("�����G%f ���ءA�魫�G%f ����ABMI�ȡG%f \n", heigh, weight, bmi);
	system("Pause");
}
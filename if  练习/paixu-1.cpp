# include <stdio.h>

int main(void)
{
	float i;
    printf("��������ĳɼ�,�������ж��㣺\n");
	scanf("%f", &i);
	if (i>100)
		printf("����!!!");
	else if (i>=90 && i<=100)
		printf("�컯�����㣡����");
	else if (i>=80 && i<90)
		printf("�¶��㣡����");
	else if (i>=70 && i<80)
		printf("���㣡����");
    else if (i>=60 && i<70)
		printf("���񣡣���");
	else if (i>=0 && i<60)
		printf("û������������Ŭ��������");
	else
		printf("�ٻ�֮�㣡����");

	return 0;
}
 
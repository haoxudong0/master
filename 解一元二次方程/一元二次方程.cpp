# include <stdio.h>
# include <math.h>

int main(void)
{    
	int a;
	int b;
	int c;
    double x1;
	double x2;
	double delta;

    printf("������һԪ���η��̵�����ϵ�������ÿո�ֿ���\n");
	scanf("%f %f %f",&a, &b, &c);

	delta = b*b - 4*a*c;

	if (delta > 0)
	{
       x1 = (-b + sqrt(delta)) / (2*a);     //sqet��һ�����ߣ���ʾ������delta����Ҫ��һ��ͷ�ļ�
	   x2 = (-b + sqrt(delta)) / (2*a);
	   printf("��һԪ���η����������⣺x1 = %f, x2 = %f\n", x1, x2);
	}
    else if (delta == 0)
    {
		x1 = -b / (2*a);
		x2 =x1;
		printf("��һԪ���η�����һ���⣺x1 = x2 = %f\n",x1);
    }
    else
	{
		printf("�޽�\n");
	}	
    
	return 0;
} 
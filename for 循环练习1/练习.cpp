//求1—100之间的奇数之和

# include <stdio.h>

int main(void)
{    
    int i;
	int sum=0;
	for (i=1; i<100; i=i+2)
	{
		sum=sum+i;
	}
    printf("sum = %d\n",sum);
	return 0;
}

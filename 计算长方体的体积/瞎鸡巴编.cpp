//计算长方体的体积

# include <stdio.h>

int main(void)
{   
	float i;
	float j;
    float k;
    float t;
	printf("请输入长方体的长,宽,高,并且用空格分开\n");	
	scanf("%f %f %f",&i, &j, &k);
	t=i*j*k;  
    printf("长方体的体积为：%f\n",t);
  return 0; 
}
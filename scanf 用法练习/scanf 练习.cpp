# include <stdio.h>

int main(void)
{
    int i;
	char ch;                       //

    scanf("%d", &i);
	printf("i = %d\n",i);
    
    while( (ch=getchar()) !='\n')  //
          continue;                //这三行代码可以删除用户输入的垃圾数字
	int j;
	scanf("%d", &j);
	printf("j = %d\n",j);
	return 0;
} 
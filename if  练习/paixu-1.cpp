# include <stdio.h>

int main(void)
{
	float i;
    printf("请输入你的成绩,鉴定你有多秀：\n");
	scanf("%f", &i);
	if (i>100)
		printf("做梦!!!");
	else if (i>=90 && i<=100)
		printf("造化钟神秀！！！");
	else if (i>=80 && i<90)
		printf("陈独秀！！！");
	else if (i>=70 && i<80)
		printf("优秀！！！");
    else if (i>=60 && i<70)
		printf("及格！！！");
	else if (i>=0 && i<60)
		printf("没秀起来，任需努力！！！");
	else
		printf("蒂花之秀！！！");

	return 0;
}
 
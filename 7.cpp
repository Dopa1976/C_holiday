#include <stdio.h>
#include <string.h>

// 分支/循环
int main()
{
	

	// int n = 1, m = 2;
	// switch (n) {
	// 	case 1:m++;
	// 	case 2:n++;
	// 	case 3:
	// 		switch(n){ //switch允许嵌套使用
	// 			case 1:n++;//这里不执行 
	// 			case 2:m++;n++;
	// 			break;
	// 			}
	// 	case 4 : m++;
	// 			break;
	// 	default:
	// 			break;
	// }
	// 	printf("m=%d n=%d\n", m, n);


	/* switch case 多分支语句
	switch(整型表达式)
	case 整型常量表达式:
		语句;
	*/
		// int day = 0;
		// printf("请输入数字1-7:");
		// scanf("%d", &day);
		// switch (day)
		// {
		// case 1:
		// case 2:
		// case 3:
		// case 4:
		// case 5:
		// 	printf("工作日!\n");
		// 	break;
		// case 6:
		// case 7:
		// 	printf("休息日!\n");
		// 	break;
		// default:
		// 	printf("输入错误!");
		// 	break;
		// }

	//找出1-100的奇数方法1.
	// for (int i = 1; i <= 100; i++)
	// {
	// 	if (i % 2 == 1)
	// 	{
	// 		printf("%d ", i);
	// 	}
	// }

	//找出1-100的奇数方法2.
	// int i = 1;
	// while (i <= 100)
	// {
	// 	if (i % 2 == 1)
	// 	{
	// 		printf("%d ", i);
	// 	}
	// 	i++;
	// }

	// 悬空else
	// int a = 0;
	// int b = 2;
	// if (a == 1)
	// 	if (b == 2)
	// 		printf("hehe\n");
	// 	else // 这里的else和距离最近的未匹配的if匹配 这里什么都不输出
	// 		printf("haha\n");

	//	int age;
	//	printf("请输入年龄:");
	//	scanf("%d",&age);
	//	if(age < 18)
	//		printf("%d岁,未成年!",age);
	//	else if(age >=18 and age<22)
	//		printf("%d岁,你还很年轻,好好努力\n",age);
	//	else if(age>=22 and age<30)
	//		printf("%d岁,22-29 努力买车买房",age);
	//	else if(age>=30 and age<40)
	//		printf("%d岁,三十而立!",age);
	//	else if(age>=40 and age<50)
	//		printf("%d岁,四十不惑!",age);
	//	else
	//		printf("%d岁,50+ 可以退休了",age);

	return 0;
}

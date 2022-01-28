#include <stdio.h>
#include <string.h>

int add(int x, int y)
{ //自定义函数实现加
	int z = x + y;
	return z;
}

//字符串
int main()
{

	//		char arr1[] = "hello!"; //字符数组存字符串
	//		char arr2[] = {'a','b','c','\0'}; // 字符串结束标志 \0
	//
	//		printf("arr1 = %s\n",arr1);  // hello hello!
	//		printf("arr2 = %s\n",arr2);  // abc
	//
	//		printf("%d\n", strlen(arr1)); // strlen()函数找到 \0 才标志结束
	//		printf("%d\n", strlen(arr2));
	//
	//		//printf("E:\desk\w.txt");//输出结果 E:deskw.txt  \转义字符
	//		printf("E:\\desk\\w.txt"); // E:\desk\w.txt  \\防止转义

	// int line = 0;
	// printf("学习!");
	// while (line <10000)
	// {
	// 	printf("学习一天!\n");
	// 	line++;
	// }
	// printf("你已经很优秀了!\n") ;

	//	int a = 10;
	//	int b = 20;
	//	int sum = 0;
	//	sum=add(a,b); //调用自定义函数
	//	printf("sum=%d\n",sum);

	//数组
	//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	//	printf("%d\n",sizeof(arr)) ; // 一个int变量占4个字节 所以int数组大小10则占40个字节
	//	int i = 0;
	//	while( i<10 ){
	//		printf("%d ",arr[i]);
	//		i++;
	//	}

	// <<左移运算  >>右移运算   左移n位,变成原来的2^n,右移把转二进制后最右的1去掉
	//	int x = 2;
	//	int y1 = x<<2;
	//	int y2 = x>>1;
	//	printf("x = %d\n",x);
	//	printf("y1 = %d\n",y1); // 2 左移两位  即2*2*2得到8
	//	printf("y2 = %d\n",y2); // 2 右移两位 即得到0

	//  与运算 &  或运算 |  把数转为二进制后每一位相与   1 & 1=1,1 & 0=0,0 & 0=0;
	//	int n1 = 1, n2 = 3;
	//	int n3 = n1&n2;
	//	printf("n3 = %d\n",n3);

	// 异或运算 ^    同则0   异则1
	//	int a = 1, b = 0;
	//	int c = a ^ b;
	//	printf("c = %d", c);  // 1 ^ 0 =1

	// 非运算 !    0为假  非0为真

	/*   单目操作符
	!		逻辑反操作
	-		负值
	+		正值
	&		取地址
	sizeof	操作数的类型长度(单位为字节)
	~		对一个数的二进制按位取反
	--		前置、后置--
	++		前置、后置++
	*		间接访问操作符(解引用操作符)
	(类型)	强制类型转换
	 */
	 
	 // 取反运算 ~
	//	 int a = 0; 	// int为4字节 存32个0     00000000000000000000000000000000  
	//	 int b = ~ a;	// int为4字节  把a的32个0取反得到32个1  为有符号数     
	//	 				// 内存中存储的为二进制补码 
	//	 printf("a=%d b=%d\n",a ,b); //答案为-1  打印的是这个数的原码 
	
	
	//		int a = 10;
	//	//int b = a++; //后置++ 先使用 再++
	//	//int b = ++a; //前置++ 先++ 再使用
	//	//int b = a--; //后置-- 先使用 再-- 
	//	int b = --a; //前置-- 先-- 再使用 
	//	printf("a=%d b=%d\n",a ,b) ; // 9  9

	
	//	int	a = (int)3.14; //类型转换 
	//	printf("%d",a);
	
	
	// 逻辑与 && 只关心两个数的真假   两个真则真   逻辑或 ||  一真则真
	// 假  - 0 真 - 非0
	//		int a = 3, b = 5; // 3!=0 真    5!=0 真 
	//	//	int c = a&&b;
	//		int c = a||b;
	//		printf("c=%d",c) ; // c=1 即真 
	
	
	//条件操作符-三目操作符-有三个操作数  exp1?exp2:exp3   exp1真则exp2  否则exp3 
	
	
	return 0;
}

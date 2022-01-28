#include <stdio.h>
#include <string.h>

	// 2022年1月26日15点06分

	// #define可以定义常量、语句、函数 
	// 定义函数时,宏-带参数   # define MAX(X,Y) (X >Y) ? X:Y
	
	// #undef 是用来撤销宏定义
	// #ifndef 防止头文件被重复包含和编译 和 #endif配对   #define放在中间
	 
#define MAX(a,b) (a>b) ? a : b

 int Max(int x, int y)
 { //用户自定义最大值函数
 	if (x > y)
 		return x;
 	else
 		return y;
 }

/*
	static 的功能:
	1.隐藏与隔离的作用
	2.保持变量内容的持久性
	3.默认初始化为 0
	
	 static修饰局部变量  局部变量的生命周期变长
	 static修饰全局变量 让静态的全局变量只能在自己所在的源文件内部使用
	 static 修饰函数 改变了函数的链接属性 
	 	外部链接属性 -> 内部链接属性 
	 
	 头文件(.h)与源文件(.c)的区别：
	 	在C语言中头文件提供 符号的申明，源文件则提供 符号的定义
	*/
	
void test(){
	static	int a = 1; //静态的局部变量 
	a++;
	printf("a=%d\n",a); // 2 3 4 5 6	
}


	//int g_val = 2022;//全局变量
	
	
	//声明外部函数  extern 返回值类型  函数名(参数1数据类型,...) 
	//extern int Add(int, int) ;


int main()
{
	
	//		int a=10 ,b = 20;
	//		int max=MAX(a,b); // 此MAX为使用#define定义的宏 
	//		printf("max=%d",max);
	
	//extern 声明外部变量 
	//	extern int g_val;
	//	printf("g_val=%d",g_val);
	
	//	int i = 0;
	//	while(i < 5)
	//	{
	//		test() ;
	//		i++;
	//	}
	
	
	/*
	寄存器变量:直接存储在CPU中的寄存器
	用register声明的变量是寄存器变量，是存放在CPU的寄存器里的。而我们平时声明的变量是存放在内存中的
    寄存器变量和普通变量比起来速度上的差异很大，毕竟CPU的速度远远大于内存的速度。寄存器有这么两个特点，一个是运算速度快，一个是不能取地址。
    学过C的都应该知道每一个变量在内存中都占有一定的的空间，来存放数据。但是在寄存器中的变量是不能取地址的，编译器会报错。
	*/
	//register int a = 10;
	//有符号数 
	//signed int;
	
	//无符号数:只有正 
	//unsigned int num = 0;	 
	
	//结构体关键字 struct 

	//typedef 类型定义,类型重命名
	//typedef unsigned int uint_32; 
	//num2类型和num1变量类型一致  都是unsigned int 
	//unsigned int num1 = 0;	 
	//uint_32 num2 = 0;
	
	
	//	int a = 10;
	//	int arr[] = {1, 2, 3, 4, 5};
	//	printf("%d\n", sizeof(a)); // 4
	//	printf("%d\n", sizeof(int)); // 4
	//	printf("%d\n", sizeof a); // 4

	/*
	 EOF →end of file 文件结束标志 -1
	\ddd ddd表示1-3个八进制的数字  如 \130 x
	\xdd dd表示2个十六进制数字     如 \x30 0
	*/

	//	char x[] ="c:\test\122";
	//	char y[] ="\122";
	//	printf("%s\n",x); // c:      estR
	//	printf("%s\n",y); // R

	//	int num1 = 10, num2 = 20;
	//	int max = 0;
	//	max = Max(num1, num2); //调用函数并传参
	//	printf("max = %d\n",max); //输出结果 20

	return 0;
}

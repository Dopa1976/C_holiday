#include <stdio.h>
#include <string.h>

//结构体
struct People{
	char name[20]; //名字 
	double height; //身高 
	double weight;	//体重 
}; 


int main()
{
	//利用结构体类型创建一个该类型的结构体变量 
	struct People p1={"jack",175,65};
	//struct People* pb = &p1; //指针变量pb存放p1的地址
	
	strcpy(p1.name,"rose"); // strcpy-string copy 字符串拷贝-库函数-string.h 
	printf("%s\n",p1.name); //修改成功 改为了rose
	 
	//p1.height = 70; //这里的height和weight能通过 结构体变量.成员直接修改 但是字符数组name不行  
	
	//	printf("%s\n",pb->name); //%s是字符型格式符 
	//	printf("%lf\n",pb->height); //%lf是double类型格式符 
	//	printf("%lf\n",pb->weight);
	
	/*
	 . 点操作符	1.结构体变量.成员 
	-> 操作符	2.结构体指针->成员	 
	*/
	
	//	printf("%s\n",(*pb).name);  //解引用指针存放的结构体变量的地址来访问 
	//	printf("%lf\n",(*pb).height);
	//	printf("%lf\n",(*pb).weight);
		
	//printf("%p\n",p1); //p1的地址 
	
	//	printf("名字:%s\n",p1.name); //结构体变量.成员 
	//	printf("身高:%lf\n",p1.height);
	//	printf("体重:%lf\n",p1.weight);
	//	p1.weight = 70;
	//	printf("修改后的体重:%lf\n",p1.weight);
	
	
	//	char ch='w';
	//	char* pc = &ch; //取地址存入指针变量pc 
	//	*pc ='a' ;
	//	printf("%c\n",ch); // a
	//	printf("%c\n",*pc); // a
	
	
	//	int a = 10; // 4个字节 
	//	int* p = &a; //取地址    int* 是p的类型
	//	printf("%p\n",&a);
	//	printf("%p\n",p);
	//	 *p= 20 ;  //  * -解引用操作符 
	//	// 有一种变量是用来存放地址的-指针变量 
	
	return 0;
}




# include <stdio.h>


	int global = 2022;
	
void test(){//自定义函数 
	
	printf("test():%d\n", global);//全局变量也能被函数直接引用 
	
}

int main(){
	test();//函数调用 
	
	
	{
		int a = 10;
		printf("%d\n",a);//ok
	}
	//printf("%d\n",a);//作用域不对 
	  
	//外部声明类型  extern


	/*
	2022年1月24日 14点07分 
	输入两个数,求和
	*/
	
	
	//	int num1 = 0;
	//	int num2 = 0;
	//	int sum=0;
	//	sum = num1 + num2;
	//	printf("请输入两个数(空格分隔):\n");
	//	scanf("%d %d",&num1 , &num2);//取地址符号 & 
	//
	//	printf("sum = %d\n", sum);
	//	
	return 0;
}

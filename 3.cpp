# include <stdio.h>

	/*
	常量--
	1.字面常量  比如 int num = 5;
	2.const修饰的常变量 
	3.#define定义的标识符常量 
	4.枚举常量 enum    
		如 性别:  男、女、保密	
		三原色: 红 、绿 、蓝 
	*/
	
#define P 3.1415926  //标识符常量 

enum Sex  //枚举变量   
{
	MALE,  //枚举常量 
	FEMALE,
	SECRET	
}; 
int main(){
	
	
	int num = 4;
	printf("num = %d\n",num);
	
	const double pi=3.1415926;
	printf("pi = %lf\n",pi);
	
	//const int n = 4;//n是变量 但是又有常属性--常变量
	//int arr[n] ={0};
	
	printf("P = %d\n",P);//#define定义的标识符常量 
	
	enum Sex sex = MALE;
	printf("%d\n",MALE);   // 0
	printf("%d\n",FEMALE); // 1
	printf("%d\n",SECRET); // 2
	
	
	return 0;
}

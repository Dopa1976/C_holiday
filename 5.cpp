#include <stdio.h>
#include <string.h>

	// 2022��1��26��15��06��

	// #define���Զ��峣������䡢���� 
	// ���庯��ʱ,��-������   # define MAX(X,Y) (X >Y) ? X:Y
	
	// #undef �����������궨��
	// #ifndef ��ֹͷ�ļ����ظ������ͱ��� �� #endif���   #define�����м�
	 
#define MAX(a,b) (a>b) ? a : b

 int Max(int x, int y)
 { //�û��Զ������ֵ����
 	if (x > y)
 		return x;
 	else
 		return y;
 }

/*
	static �Ĺ���:
	1.��������������
	2.���ֱ������ݵĳ־���
	3.Ĭ�ϳ�ʼ��Ϊ 0
	
	 static���ξֲ�����  �ֲ��������������ڱ䳤
	 static����ȫ�ֱ��� �þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
	 static ���κ��� �ı��˺������������� 
	 	�ⲿ�������� -> �ڲ��������� 
	 
	 ͷ�ļ�(.h)��Դ�ļ�(.c)������
	 	��C������ͷ�ļ��ṩ ���ŵ�������Դ�ļ����ṩ ���ŵĶ���
	*/
	
void test(){
	static	int a = 1; //��̬�ľֲ����� 
	a++;
	printf("a=%d\n",a); // 2 3 4 5 6	
}


	//int g_val = 2022;//ȫ�ֱ���
	
	
	//�����ⲿ����  extern ����ֵ����  ������(����1��������,...) 
	//extern int Add(int, int) ;


int main()
{
	
	//		int a=10 ,b = 20;
	//		int max=MAX(a,b); // ��MAXΪʹ��#define����ĺ� 
	//		printf("max=%d",max);
	
	//extern �����ⲿ���� 
	//	extern int g_val;
	//	printf("g_val=%d",g_val);
	
	//	int i = 0;
	//	while(i < 5)
	//	{
	//		test() ;
	//		i++;
	//	}
	
	
	/*
	�Ĵ�������:ֱ�Ӵ洢��CPU�еļĴ���
	��register�����ı����ǼĴ����������Ǵ����CPU�ļĴ�����ġ�������ƽʱ�����ı����Ǵ�����ڴ��е�
    �Ĵ�����������ͨ�����������ٶ��ϵĲ���ܴ󣬱Ͼ�CPU���ٶ�ԶԶ�����ڴ���ٶȡ��Ĵ�������ô�����ص㣬һ���������ٶȿ죬һ���ǲ���ȡ��ַ��
    ѧ��C�Ķ�Ӧ��֪��ÿһ���������ڴ��ж�ռ��һ���ĵĿռ䣬��������ݡ������ڼĴ����еı����ǲ���ȡ��ַ�ģ��������ᱨ��
	*/
	//register int a = 10;
	//�з����� 
	//signed int;
	
	//�޷�����:ֻ���� 
	//unsigned int num = 0;	 
	
	//�ṹ��ؼ��� struct 

	//typedef ���Ͷ���,����������
	//typedef unsigned int uint_32; 
	//num2���ͺ�num1��������һ��  ����unsigned int 
	//unsigned int num1 = 0;	 
	//uint_32 num2 = 0;
	
	
	//	int a = 10;
	//	int arr[] = {1, 2, 3, 4, 5};
	//	printf("%d\n", sizeof(a)); // 4
	//	printf("%d\n", sizeof(int)); // 4
	//	printf("%d\n", sizeof a); // 4

	/*
	 EOF ��end of file �ļ�������־ -1
	\ddd ddd��ʾ1-3���˽��Ƶ�����  �� \130 x
	\xdd dd��ʾ2��ʮ����������     �� \x30 0
	*/

	//	char x[] ="c:\test\122";
	//	char y[] ="\122";
	//	printf("%s\n",x); // c:      estR
	//	printf("%s\n",y); // R

	//	int num1 = 10, num2 = 20;
	//	int max = 0;
	//	max = Max(num1, num2); //���ú���������
	//	printf("max = %d\n",max); //������ 20

	return 0;
}

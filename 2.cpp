# include <stdio.h>


	int global = 2022;
	
void test(){//�Զ��庯�� 
	
	printf("test():%d\n", global);//ȫ�ֱ���Ҳ�ܱ�����ֱ������ 
	
}

int main(){
	test();//�������� 
	
	
	{
		int a = 10;
		printf("%d\n",a);//ok
	}
	//printf("%d\n",a);//�����򲻶� 
	  
	//�ⲿ��������  extern


	/*
	2022��1��24�� 14��07�� 
	����������,���
	*/
	
	
	//	int num1 = 0;
	//	int num2 = 0;
	//	int sum=0;
	//	sum = num1 + num2;
	//	printf("������������(�ո�ָ�):\n");
	//	scanf("%d %d",&num1 , &num2);//ȡ��ַ���� & 
	//
	//	printf("sum = %d\n", sum);
	//	
	return 0;
}

# include <stdio.h>

	/*
	����--
	1.���泣��  ���� int num = 5;
	2.const���εĳ����� 
	3.#define����ı�ʶ������ 
	4.ö�ٳ��� enum    
		�� �Ա�:  �С�Ů������	
		��ԭɫ: �� ���� ���� 
	*/
	
#define P 3.1415926  //��ʶ������ 

enum Sex  //ö�ٱ���   
{
	MALE,  //ö�ٳ��� 
	FEMALE,
	SECRET	
}; 
int main(){
	
	
	int num = 4;
	printf("num = %d\n",num);
	
	const double pi=3.1415926;
	printf("pi = %lf\n",pi);
	
	//const int n = 4;//n�Ǳ��� �������г�����--������
	//int arr[n] ={0};
	
	printf("P = %d\n",P);//#define����ı�ʶ������ 
	
	enum Sex sex = MALE;
	printf("%d\n",MALE);   // 0
	printf("%d\n",FEMALE); // 1
	printf("%d\n",SECRET); // 2
	
	
	return 0;
}

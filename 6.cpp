#include <stdio.h>
#include <string.h>

//�ṹ��
struct People{
	char name[20]; //���� 
	double height; //��� 
	double weight;	//���� 
}; 


int main()
{
	//���ýṹ�����ʹ���һ�������͵Ľṹ����� 
	struct People p1={"jack",175,65};
	//struct People* pb = &p1; //ָ�����pb���p1�ĵ�ַ
	
	strcpy(p1.name,"rose"); // strcpy-string copy �ַ�������-�⺯��-string.h 
	printf("%s\n",p1.name); //�޸ĳɹ� ��Ϊ��rose
	 
	//p1.height = 70; //�����height��weight��ͨ�� �ṹ�����.��Աֱ���޸� �����ַ�����name����  
	
	//	printf("%s\n",pb->name); //%s���ַ��͸�ʽ�� 
	//	printf("%lf\n",pb->height); //%lf��double���͸�ʽ�� 
	//	printf("%lf\n",pb->weight);
	
	/*
	 . �������	1.�ṹ�����.��Ա 
	-> ������	2.�ṹ��ָ��->��Ա	 
	*/
	
	//	printf("%s\n",(*pb).name);  //������ָ���ŵĽṹ������ĵ�ַ������ 
	//	printf("%lf\n",(*pb).height);
	//	printf("%lf\n",(*pb).weight);
		
	//printf("%p\n",p1); //p1�ĵ�ַ 
	
	//	printf("����:%s\n",p1.name); //�ṹ�����.��Ա 
	//	printf("���:%lf\n",p1.height);
	//	printf("����:%lf\n",p1.weight);
	//	p1.weight = 70;
	//	printf("�޸ĺ������:%lf\n",p1.weight);
	
	
	//	char ch='w';
	//	char* pc = &ch; //ȡ��ַ����ָ�����pc 
	//	*pc ='a' ;
	//	printf("%c\n",ch); // a
	//	printf("%c\n",*pc); // a
	
	
	//	int a = 10; // 4���ֽ� 
	//	int* p = &a; //ȡ��ַ    int* ��p������
	//	printf("%p\n",&a);
	//	printf("%p\n",p);
	//	 *p= 20 ;  //  * -�����ò����� 
	//	// ��һ�ֱ�����������ŵ�ַ��-ָ����� 
	
	return 0;
}




#include<stdio.h>
#include<string.h>
#include<windows.h>

int n=0;		
struct zggz{
		int num[10];
		char name[10];
		float gang;//��λ����
		float xin;//н������
		float zhi;//ְ�����
		float ji;//��Ч����
		float ying;//Ӧ������
		float ge;//��������˰
		float shi;//ʵ������
}STAFF;

void read()
{
    FILE *fp;
    fp=("gx.dat","r");
if((fp=fopen("gx.dat","r"))==NULL)//�ļ���ʧ��
{
	printf("�ļ���ʧ�ܣ�");
	fclose(fp);
}
char STAFF zggz[100];
    do
	{		
		zggz[n];
	    fgets(zggz,80,fp);
		n++;
	}while(zggz=EOF);
	fclose(fp);
}

void write()//����
{
	if(n>0)
	{
	 fput();  
	}
}
void find();//��ѯ
void list();//���
void modift();//�޸�
void del();//ɾ��
void add();//���
void grsds();

int main()
{	
	int num;
	void read();
	printf("��ѡ���Ӧ����ʵ�������Ĺ���\n1.��ѯ\02.�޸�\03.���\n4.ɾ��\05.��\0 6.���\n7.�˳�");
	scanf("%d",num);
	if(num=1)
	{
		find();
	}
	else if(num=2)
	{
		modift();
	}
	else if(num=3)
	{
		add();
	}
	else if(num=4)
	{
		del();
	}
	else if(num=5)
	{
		write();
	}
	else if(num=6)
	{
		read();
	}
	else
	{
	}
	return 0;
}


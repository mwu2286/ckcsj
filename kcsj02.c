#include<stdio.h>
#include<string.h>
#include<iostream.h>
#include<windows.h>

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
}zggza[100],zggzb[100],*p,*q;

void read()
{	
	int n=0;
	int ch;
    FILE *fp;
	p=zggza;
if((fp=fopen("gx.dat","r"))==NULL)	//�ļ���ʧ��
{
	printf("�ļ���ʧ�ܣ�");
	exit(-1);
	fclose(fp);
}
	ch=zggza->num;
    do
	{	
		zggza[n];
	    fread(p,sizeof(struct zggz),n+1,fp);
		n++;
	}while(ch=EOF);
	fclose(fp);
}

void write()    //����
{   
	int n=0;
	FILE *fp;
	q=zggzb;    
	if(n>0)
	{
        fwrite(q,sizeof(struct zggz),n+1,fp);
		fclose(fp);
	}
	printf("�ļ���ʧ�ܣ�");
}

void find()    //��ѯ
{	
	
	int ch;
    int gonghao[10];
	int i=0;
	ch=zggza->num;
	printf("�����빤�ţ�");
	scanf("%d","&gonggao");
	do
	{
	    zggza->num[i];
		i++;
	}while(gonghao[10]=ch);
printf("%d","zggz[i-1]");
}

void list()	//���
{	int n=0,j=0;
	for(j;j<n;j++);
	{
	printf("%d","zggz[j]");	
	}
}
void modift()	//�޸� 

void del()	//ɾ��
{
	int ch;
	int i=0;
	int gonghao[10];
    ch=zggza->num;
	printf("������Ҫɾ����ְ�����ţ�");
	scanf("%d","&gonggao");
	do
	{
	
		i++;
	}while(gonghao[10]=ch);
	do
	{
		zggza[i-2]=zggza[i-1];
		i++;
	}while(ch=EOF);

}

void add()	//���
{

}

void grsds()
{
    int sum=0;
	sum=zggza->gang+zggza->xin+zggza->ji+zggza->ying;
	sum=sum-3500;
	if(sum>100000)
	{

	}

}

int main() 
{	
	int n=0,i=0,j=0;
	int gonghao[10];
	void read();
	printf("��ѡ���Ӧ����ʵ�������Ĺ���\n1.��ѯ 2.�޸� 3.���\n4.ɾ�� 5.���� 6.���\n7.�˳�");
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
	
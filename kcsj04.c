#include<stdio.h>
#include<string.h>
#include<iostream.h>

    int n=0,i=0,j=0,num;
	int gonghao[10];
	double sum,sum1,sum2,tax;
	void grsds(double sum);

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
}zggza[200],zggzb[200],*p,*q;

void read()
{	
    FILE *fp;
if((fp=fopen("gx.dat","r"))==NULL)	//�ļ���ʧ��
{
	printf("�ļ���ʧ�ܣ�\n");
	exit(-1);
	fclose(fp);
}
else
    printf("�ļ��򿪳ɹ���\n");
		rewind(fp);
	    do
		{
		fscanf(fp,"%[^,],%[^,],%f,%f,%f,%f,%f,%f,%f",&zggza[n].num,&zggza[n].name,&zggza[n].gang,&zggza[n].xin,&zggza[n].zhi,&zggza[n].ji,&zggza[n].ying,&zggza[n].ge,&zggza[n].shi);
		n++;
		}while(!feof(fp));
		i=n;
		for(n=0;n<i;n++)
		{
		printf("%s,%s,%f,%f,%f,%f,%f,%f,%f\n",zggza[n].num,zggza[n].name,zggza[n].gang,zggza[n].xin,zggza[n].zhi,zggza[n].ji,zggza[n].ying,zggza[n].ge,zggza[n].shi);
		}
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
	FILE *fp;
	printf("�����빤�ţ�\n");
	scanf("%d","&gonggao");
	ch=gonghao;
	do
	{   n=0;
		fscanf(fp,"%[^,],%[^,],%f,%f,%f,%f,%f,%f,%f\n",&zggza[n].num,&zggza[n].name,&zggza[n].gang,&zggza[n].xin,&zggza[n].zhi,&zggza[n].ji,&zggza[n].ying,&zggza[n].ge,&zggza[n].shi);
		n++;
	}while(ch=zggza[n].num);
	    printf("%s,%s,%f,%f,%f,%f,%f,%f,%f\n",zggza[n].num,zggza[n].name,zggza[n].gang,zggza[n].xin,zggza[n].zhi,zggza[n].ji,zggza[n].ying,zggza[n].ge,zggza[n].shi);
}

void list()	//���
{	int n=0,j=0;
	for(j;j<n;j++);
	{
	printf("%d","zggz[j]");	
	}
}

void add();
void modift()	//�޸� 
{
    find();
    printf("������ְ��������Ϣ");
	scanf("%d%s%f%f%f%f",zggza[i-1].num,zggza[i-1].name,zggza[i-1].gang,zggza[i-1].xin,
		zggza[i-1].zhi,zggza[i-1].ji);
	sum=zggza[i-1].gang+zggza[i-1].xin+zggza[i-1].zhi+zggza[i-1].ji;
	grsds(sum);
	printf("%d%s%f%f%f%f%f%f%f%f"
		,zggza->num,zggza->name,zggza->gang,zggza->xin,zggza->zhi,zggza->ji,sum,tax,sum2);
}
void del()	//ɾ��
{
	int ch;
	int i=0;
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
	n++;
	printf("������ְ��������Ϣ");
	scanf("%d%s%f%f%f%f",zggza[n].num,zggza[n].name,zggza[n].gang,zggza[n].xin,zggza[n].zhi,zggza[n].ji);
	sum=sum+zggza[n].gang+zggza[n].xin+zggza[n].zhi+zggza[n].ji;
	grsds(sum);
	printf("%d%s%f%f%f%f%f%f%f%f"
		,zggza[n].num,zggza[n].name,zggza[n].gang,zggza[n].xin,zggza[n].zhi,zggza[n].ji,sum,tax,sum2);
}

void grsds(double sum)//�����������˰
{
	sum=sum+zggza[n].gang+zggza[n].xin+zggza[n].zhi+zggza[n].ji;
	sum1=sum-3500;//��������˰������3500��sum1ΪӦ�ɸ�˰���ֹ��ʡ�
	if(sum>100000)
	{
		tax=(sum-100000)*0.45+(20000*0.4)+(20000*0.35)+(20000*0.3)
			+(20000*0.25)+(15000*0.2)+(3000*0.15)+(1500*0.1)+(500*0.05);
	}
	else if(sum>80000&&sum<100000)
	{
	    tax=(sum-80000)*0.4+(20000*0.35)+(20000*0.3)+(20000*0.25)
			+(15000*0.2)+(3000*0.15)+(1500*0.1)+(500*0.05);
	}
	else if(sum>60000&&sum<40000)
	{
	    tax=(sum-60000)*0.35+(20000*0.3)+(20000*0.25)+(15000*0.2)
			+(3000*0.15)+(1500*0.1)+(500*0.05);
	}
	else if(sum>40000&&sum<20000)
	{
	    tax=(sum-40000)*0.3+(20000*0.25)+(15000*0.2)+(3000*0.15)
			+(1500*0.1)+(500*0.05);
	}
	else if(sum>20000&&sum<40000)
	{
	    tax=(sum-20000)*0.25+(5000*0.2)+(3000*0.15)+(1500*0.1)+(500*0.05);
	}
	else if(sum>5000&&sum<20000)
	{
	    tax=(sum-5000)*0.2+(3000*0.15)+(1500*0.1)+(500*0.05);
	}
	else if(sum>2000&&sum<5000)
	{
	    tax=(sum-2000)*0.15+(1500*0.1)+(500*0.05);
	}
	else if(sum>500&&sum<2000)
	{
	    tax=(sum-500)*0.1+(500*0.05);
	}
	else if(sum>0&&sum<500)
	{
	    tax=sum*0.05;
	}
	else
	{
		tax=0;
	}
	sum2=sum-tax;
}

int main() 
{	
	int grade;
	read();
	printf("��ѡ���Ӧ����ʵ�������Ĺ���\n1.��ѯ 2.�޸� 3.���\n4.ɾ�� 5.���� 6.���\n7.�˳�\n");
	scanf("%d",&grade);
	switch(grade)
	{
	case 1:
	{
	    find();break;
	}
	case 2:
	{
	    modift();break;
	}
	case 3:
	{
	    add();break;
	}
	}
	return 0;
}
	
#include<stdio.h>
#include<string.h>
#include<iostream.h>
#include<windows.h>

	struct zggz{
		int num[10];
		char name[10];
		float gang;//岗位工资
		float xin;//薪级工资
		float zhi;//职务津贴
		float ji;//绩效工资
		float ying;//应发工资
		float ge;//个人所得税
		float shi;//实发工资
}zggza[100],zggzb[100],*p,*q;

void read()
{	
	int n=0;
	int ch;
    FILE *fp;
	p=zggza;
if((fp=fopen("gx.dat","r"))==NULL)	//文件打开失败
{
	printf("文件打开失败！");
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

void write()    //保存
{   
	int n=0;
	FILE *fp;
	q=zggzb;    
	if(n>0)
	{
        fwrite(q,sizeof(struct zggz),n+1,fp);
		fclose(fp);
	}
	printf("文件打开失败！");
}

void find()    //查询
{	
	
	int ch;
    int gonghao[10];
	int i=0;
	ch=zggza->num;
	printf("请输入工号！");
	scanf("%d","&gonggao");
	do
	{
	    zggza->num[i];
		i++;
	}while(gonghao[10]=ch);
printf("%d","zggz[i-1]");
}

void list()	//浏览
{	int n=0,j=0;
	for(j;j<n;j++);
	{
	printf("%d","zggz[j]");	
	}
}
void modift()	//修改 

void del()	//删除
{
	int ch;
	int i=0;
	int gonghao[10];
    ch=zggza->num;
	printf("请输入要删除的职工工号！");
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

void add()	//添加
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
	printf("请选择对应数字实现其代表的功能\n1.查询 2.修改 3.添加\n4.删除 5.保存 6.浏览\n7.退出");
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
	
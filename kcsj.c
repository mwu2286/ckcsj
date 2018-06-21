#include<stdio.h>
#include<string.h>
#include<windows.h>

int n=0;		
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
}STAFF;

void read()
{
    FILE *fp;
    fp=("gx.dat","r");
if((fp=fopen("gx.dat","r"))==NULL)//文件打开失败
{
	printf("文件打开失败！");
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

void write()//保存
{
	if(n>0)
	{
	 fput();  
	}
}
void find();//查询
void list();//浏览
void modift();//修改
void del();//删除
void add();//添加
void grsds();

int main()
{	
	int num;
	void read();
	printf("请选择对应数字实现其代表的功能\n1.查询\02.修改\03.添加\n4.删除\05.保\0 6.浏览\n7.退出");
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


#include<stdio.h>
#include<string.h>
#include<iostream.h>
#include<windows.h>

    int n=0,i=0,j=0,num;
	int gonghao[10];
	double sum=0,sum1,sum2,tax;

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
	scanf("%d",&gonggao);
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
	n++;
	printf("请输入职工基本信息");
	scanf("%d%s%f%f%f%f",zggza->num,zggza->name,zggza->gang,zggza->xin,zggza->zhi,zggza->ji);
	sum="zggza->num"+"zggza->name"+"zggza->gang"+"zggza->xin"+"zggza->zhi"+"zggza->ji";
	grsds();
	printf("%d%s%f%f%f%f%f%f%f%f"
		,zggza->num,zggza->name,zggza->gang,zggza->xin,zggza->zhi,zggza->ji,sum,tax,sum2);
}

void grsds()//计算个人所得税
{
	sum=zggza->gang+zggza->xin+zggza->ji+zggza->ying;
	sum1=sum-3500;//给人所得税起征点3500，sum1为应缴个税部分工资。
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
	void read();
	printf("请选择对应数字实现其代表的功能\n1.查询 2.修改 3.添加\n4.删除 5.保存 6.浏览\n7.退出");
	scanf("%d","num");
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
	
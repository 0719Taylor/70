#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <errno.h>

//二进制文件
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt","wb"); // wb -- 以二进制的形式写入文件
//	fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}






//int main()
//{
//	//打开文件test.txt
//	//相对路径的写法
//	//..表示上一级路径
//	//.表示当前路径
//	//fopen("..test.txt","r");//表示在test.c所在文件夹的上级路径打开test.txt
//	//fopen("../..test.txt","r");//表示在test.c所在文件夹的上上级路径打开test.txt
//	//fopen("test.txt", "r");
//	//绝对路径的写法
//	//fopen("D:\\zhuomian\\C代码\\70.文件操作\\70.文件操作\\test.txt", "r");
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	//打开成功
//	//读文件
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//}



//文件的顺序读写

//int main()
//{
//	FILE* pfWrite = fopen("test.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputc('b', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}





//int main()
//{
//	FILE* pfRead = fopen("test.txt", "r");
//	if (pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	printf("%c",fgetc(pfRead));//b
//	printf("%c", fgetc(pfRead));//i
//	printf("%c", fgetc(pfRead));//t
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}






//从键盘输入
//输出到屏幕
//键盘&屏幕都是外部设备

//键盘 -- 标准输入设备
//屏幕 -- 标准输出设备
//是一个程序默认打开的两个流设备
//stdin(标准输入设备) stdout(标准输出设备) stderr 这三个流默认打开(都是FILE*类型)





//int main()
//{
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//}






//fgets()

//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//读文件
//	fgets(buf, 1024, pf);
//	//printf("%s",buf);
//	puts(buf);
//	fgets(buf, 1024, pf);
//	puts(buf);
//	//printf("%s", buf);
//	fclose(pf);
//	pf = NULL;
//}



//fputs

//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//写文件
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//	fclose(pf);
//	pf = NULL;
//}









//int main()
//{
//	//从键盘读取一行文本信息
//	//char buf[1024] = { 0 };		
//	////fgets(buf,1024,stdin);//从标准输入流读取
//	////fputs(buf, stdout);//输出到标准输出流
//
//	//gets(buf);
//	//puts(buf);
//	return 0;
//}








//fprintf() -- 格式化的形式写文件
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100,3.14f,"bit" };//3.14默认是double类型,3.14f表示float类型
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化的形式写文件
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}








//fscanf -- 格式化的输入数据
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100,3.14f,"bit" };//3.14默认是double类型,3.14f表示float类型
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化的输入数据
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), &(s.arr));
//	printf("%d %f %s\n",s.n,s.score,s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}





//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 0 };
//	fscanf(stdin,"%d %f %s", &(s.n), &(s.score), &(s.arr));
//	fprintf(stdout, "%d %f %s\n", s.n, s.score, s.arr);
//	return 0;
//}













//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = {100,3.14f,"abcdef"};
//	struct S tmp = { 0 };
//	char buf[1024] = { 0 };
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr); //把格式化的数据转换成字符串存储到buf
//	//printf("%s\n", buf);
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), &(tmp.arr));//从buf中读取格式化的数据到tmp中
//	printf("%d %f %s\n",tmp.n,tmp.score,tmp.arr);
//	return 0;
//
//}






//对比一组函数
//  scanf/fscanf/sscanf
//  printf/fprintf/sprintf

//scanf/printf 是针对标准输入流/标准输出流的 格式化输入/输出语句
//fscanf/fprintf 是针对所有输入流/所有输出流的 格式化输入/输出语句
//sscanf/sprintf sscanf是从字符串中读取格式化的数据  sprintf是把格式化数据输出到(存储到)字符串











//fwrite

//struct S 
//{	
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	struct S s = { "张三",20,55.6 };
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fwrite(&s,sizeof(struct S),1,pf);
//	fclose(pf);
//	pf = NULL;
//}





//fread

//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	struct S tmp = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %lf\n",tmp.name,tmp.age,tmp.score);
//	fclose(pf);
//	pf = NULL;
//}














//文件的随机读写

//fseek -- 根据文件指针的位置和偏移量来定位文件指针
//ftell -- 返回文件指针相对于起始位置的偏移量
//rewind -- 让文件指针的位置回到文件的起始位置
//int main()
//{
//	FILE* pf = fopen("test.txt", "r"); 
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.定位文件指针
//	//fseek(pf,-2,SEEK_END);
//	int ch = fgetc(pf);
//	printf("%c\n",ch);
//	//int pos = ftell(pf);//返回文件指针相对于起始位置的偏移量
//	//printf("%d\n",pos);
//	rewind(pf);
//	ch=fgetc(pf);
//	printf("%c\n", ch);
//	//2.读取文件
//	//int ch = fgetc(pf);
//	//printf("%c\n",ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}








//int main()
//{
//	//EOF
//	//feof();//EOF -- end of file - 文件结束标志
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	int ch = fgetc(pf);
//	printf("%d\n",ch);//-1
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}








//perror
//int main()
//{ 
//	//strerror -- 把错误码对应的错误信息的字符串地址返回
//	//printf("%s\n",strerror(errno));
//
//	FILE* pf = fopen("test2.txt", "r");
//	if (pf == NULL)
//	{
//		perror("open file test2.txt");
//		return 0;
//	}
//	//读文件
//
//	fclose(pf);
//	pf = NULL;
//}









int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("open file");
		return 0;
	}
	//读文件
	int ch = 0;
	while ((ch = fgetc(pf) != EOF))
	{
		putchar(ch);
	}
	if (ferror(pf))
	{
		printf("error\n");
	}
	else if (feof(pf))
	{
		printf("end of file\n");
	}
	fclose(pf);
	pf = NULL;
	return 0;
}
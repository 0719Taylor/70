#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <errno.h>

//�������ļ�
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt","wb"); // wb -- �Զ����Ƶ���ʽд���ļ�
//	fwrite(&a, 4, 1, pf);//�����Ƶ���ʽд���ļ���
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}






//int main()
//{
//	//���ļ�test.txt
//	//���·����д��
//	//..��ʾ��һ��·��
//	//.��ʾ��ǰ·��
//	//fopen("..test.txt","r");//��ʾ��test.c�����ļ��е��ϼ�·����test.txt
//	//fopen("../..test.txt","r");//��ʾ��test.c�����ļ��е����ϼ�·����test.txt
//	//fopen("test.txt", "r");
//	//����·����д��
//	//fopen("D:\\zhuomian\\C����\\70.�ļ�����\\70.�ļ�����\\test.txt", "r");
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	//�򿪳ɹ�
//	//���ļ�
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//}



//�ļ���˳���д

//int main()
//{
//	FILE* pfWrite = fopen("test.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	//д�ļ�
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
//	//���ļ�
//	printf("%c",fgetc(pfRead));//b
//	printf("%c", fgetc(pfRead));//i
//	printf("%c", fgetc(pfRead));//t
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}






//�Ӽ�������
//�������Ļ
//����&��Ļ�����ⲿ�豸

//���� -- ��׼�����豸
//��Ļ -- ��׼����豸
//��һ������Ĭ�ϴ򿪵��������豸
//stdin(��׼�����豸) stdout(��׼����豸) stderr ��������Ĭ�ϴ�(����FILE*����)





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
//	//���ļ�
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
//	//д�ļ�
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//	fclose(pf);
//	pf = NULL;
//}









//int main()
//{
//	//�Ӽ��̶�ȡһ���ı���Ϣ
//	//char buf[1024] = { 0 };		
//	////fgets(buf,1024,stdin);//�ӱ�׼��������ȡ
//	////fputs(buf, stdout);//�������׼�����
//
//	//gets(buf);
//	//puts(buf);
//	return 0;
//}








//fprintf() -- ��ʽ������ʽд�ļ�
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100,3.14f,"bit" };//3.14Ĭ����double����,3.14f��ʾfloat����
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//��ʽ������ʽд�ļ�
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}








//fscanf -- ��ʽ������������
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100,3.14f,"bit" };//3.14Ĭ����double����,3.14f��ʾfloat����
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//��ʽ������������
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
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr); //�Ѹ�ʽ��������ת�����ַ����洢��buf
//	//printf("%s\n", buf);
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), &(tmp.arr));//��buf�ж�ȡ��ʽ�������ݵ�tmp��
//	printf("%d %f %s\n",tmp.n,tmp.score,tmp.arr);
//	return 0;
//
//}






//�Ա�һ�麯��
//  scanf/fscanf/sscanf
//  printf/fprintf/sprintf

//scanf/printf ����Ա�׼������/��׼������� ��ʽ������/������
//fscanf/fprintf ���������������/����������� ��ʽ������/������
//sscanf/sprintf sscanf�Ǵ��ַ����ж�ȡ��ʽ��������  sprintf�ǰѸ�ʽ�����������(�洢��)�ַ���











//fwrite

//struct S 
//{	
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	struct S s = { "����",20,55.6 };
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














//�ļ��������д

//fseek -- �����ļ�ָ���λ�ú�ƫ��������λ�ļ�ָ��
//ftell -- �����ļ�ָ���������ʼλ�õ�ƫ����
//rewind -- ���ļ�ָ���λ�ûص��ļ�����ʼλ��
//int main()
//{
//	FILE* pf = fopen("test.txt", "r"); 
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.��λ�ļ�ָ��
//	//fseek(pf,-2,SEEK_END);
//	int ch = fgetc(pf);
//	printf("%c\n",ch);
//	//int pos = ftell(pf);//�����ļ�ָ���������ʼλ�õ�ƫ����
//	//printf("%d\n",pos);
//	rewind(pf);
//	ch=fgetc(pf);
//	printf("%c\n", ch);
//	//2.��ȡ�ļ�
//	//int ch = fgetc(pf);
//	//printf("%c\n",ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}








//int main()
//{
//	//EOF
//	//feof();//EOF -- end of file - �ļ�������־
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
//	//strerror -- �Ѵ������Ӧ�Ĵ�����Ϣ���ַ�����ַ����
//	//printf("%s\n",strerror(errno));
//
//	FILE* pf = fopen("test2.txt", "r");
//	if (pf == NULL)
//	{
//		perror("open file test2.txt");
//		return 0;
//	}
//	//���ļ�
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
	//���ļ�
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
#include<cstdlib>
#include<cstdio>
#include<iostream>
#include<cstring>
#include"code_waibibabu.h" 
using namespace std;
int main()
{
	char Input_file[200000];
	memset(Input_file,0,sizeof(Input_file));
	printf("ֱ�ӽ��ļ��ϵ���ǰ���� �� �����ļ�·�� ���س�\n����out_put.txt��Ϊ�����ļ�\n"); 
	scanf("%s",Input_file);
	
	freopen(Input_file,"r",stdin);
	freopen("out_put.txt","w",stdout);
	
	char Input_text[200000]; 
	gets(Input_text);
	printf("%s",encode_wbbb(Input_text));
	fclose(stdin);
	fclose(stdout);
	
	return 0;
} 

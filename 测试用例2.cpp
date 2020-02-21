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
	printf("直接将文件拖到当前窗口 或 键入文件路径 并回车\n请勿将out_put.txt作为输入文件\n"); 
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

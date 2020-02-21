#include<cstdlib>
#include<cstdio>
#include<iostream>
#include<cstring>
#include"code_waibibabu.h" 
using namespace std;
int main()
{
	char Input_file[200000];//文件路径最大长度
	memset(Input_file,0,sizeof(Input_file));
	scanf("%s",Input_file);
	
	freopen(Input_file,"r",stdin);
	freopen("out_put.txt","w",stdout);
	
	char Input_text[20000]; //文本最大长度
	memset(Input_text,0,sizeof(Input_text));
	gets(Input_text);
	printf("%s",encode_wbbb(Input_text));
	fclose(stdin);
	fclose(stdout);
	
	return 0;
} 

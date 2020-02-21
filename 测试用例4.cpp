#include<cstdlib>
#include<cstdio>
#include<iostream>
#include<cstring>
#include"code_waibibabu.h" 
using namespace std;
int main()
{
	char Input_text[200000]; 
	printf("输入你要解码的字符串(一行):");
	gets(Input_text);
	printf("%s",decode_wbbb(Input_text));
	freopen("out_put.txt","w",stdout);
	printf("%s",decode_wbbb(Input_text));
	fclose(stdout);
	return 0;
} 

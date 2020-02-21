//һ���򵥵�c++�Ŀ⣬���ڷ�װ��ȰͲ��ӽ���  
#ifndef CODE_WaiBiBaBu
	#define CODE_WaiBiBaBu
	#include<cstring>
	char enCODE_WaiBi[]="���";
	char enCODE_BaBu[]="�Ͳ�";
	void enCODE_reduce(char *text_source)
	{
	}
	char *encode_wbbb(char *text_source)
	{
		static char enCode_ret[100000];
		memset(enCode_ret,0,sizeof(enCode_ret));
		int st=0;
		for(int i=0;i<strlen(text_source);i++)
		{
			char c=text_source[i];
			int char_bit[8]={0};
			for(int j=7;j>=0;j--)
			{
				char_bit[j]=c&1;
				c>>=1;
			}
			for(int j=0;j<8;j++)
				for(int k=0;k<4;k++)
					enCode_ret[st+i*32+j*4+k]=char_bit[j]?enCODE_WaiBi[k]:enCODE_BaBu[k];
		}
		return enCode_ret;
	}
	int comp_waibi(char *waibi)
	{
		int flag=1;
		for(int i=0;i<4;i++)
			if(enCODE_WaiBi[i]!=waibi[i])
				flag=0;
		return flag;
	}
	char *decode_wbbb(char *text_out)
	{
		static char deCode_ret[100000];
		memset(deCode_ret,0,sizeof(deCode_ret));
		int st=0;
		for(int i=0;i<strlen(text_out);i+=32)
		{
			for(int j=0;j<8;j++)
			{
				int num=comp_waibi(&text_out[i+j*4]);
				deCode_ret[st]=deCode_ret[st]*2;
				deCode_ret[st]+=num;
			}
			st++;
		}
		return deCode_ret;
	}
#endif 

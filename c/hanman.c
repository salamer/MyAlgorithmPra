#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char correct[100],ans[100];
int count=7;

void check(char a,char b[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a==b[i])
		{	
				b[i]=0;
				count--;
		}
	}

}

int main()
{
	int i,length,ans_length;
	scanf("%s %s",correct,ans);
	length=strlen(correct);
	ans_length=strlen(ans);
	if(ans_length>=7)
	{
		printf("you lose");
		return 0;
	}
	else
	{
		for(i=0;i<ans_length;i++)
			check(ans[i],correct,length);
	}
	if(count>0)
		printf("you win");
	else
		printf("you lose");
	return 0;
}
		
	
